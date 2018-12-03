def findWaitingTime(processes, n,  bt, wt): 
  
    wt[0] = 0
  
    for i in range(1, n ): 
        wt[i] = bt[i - 1] + wt[i - 1]  
  
def findavgTime( processes, n, bt): 
  
    wt = [0] * n 
    tat = [0] * n  
    total_wt = 0
    total_tat = 0
  
    findWaitingTime(processes, n, bt, wt) 
  
    print( "Processes Burst time " + 
                  " Waiting time " ) 
  
    for i in range(n): 
      
        total_wt = total_wt + wt[i] 
        total_tat = total_tat + tat[i] 
        print(" " + str(i + 1) + "\t\t" + 
                    str(bt[i]) + "\t " + 
                    str(wt[i]) + "\t\t ")
  
    print( "Average waiting time = "+
                   str(total_wt / n)) 
if __name__ =="__main__": 
      
    processes = [ 1] 
    n = len(processes) 
  
    burst_time = [10] 
  
    findavgTime(processes, n, burst_time)