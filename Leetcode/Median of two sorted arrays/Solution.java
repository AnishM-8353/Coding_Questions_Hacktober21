class Solution {
public:
    double findMedianSortedArrays(vector<int>& A, vector<int>& B) {
        int n=A.size();
        int m = B.size();
        if (n > m)
        return findMedianUtil(B,m,A,n );
        return findMedianUtil(A,n,B,m);
       
    }
    
    
    double findMedianUtil( vector<int>& A, int n,vector<int>& B,int m){
   
   int leftHalfLen = (n + m + 1) / 2;
   int aMaxCount = n;
   int aMinCount = 0; 
   
   while (aMinCount <= aMaxCount)
        {
            int aCount = aMinCount + ((aMaxCount - aMinCount) / 2);
            int bCount = leftHalfLen - aCount;
            if (aCount > 0 && A[aCount - 1] > B[bCount])
            {
                
                aMaxCount = aCount - 1;
            }
            
            else if (aCount < n && B[bCount - 1] > A[aCount])
            {
           
                aMinCount = aCount + 1;
            }
            else
            {
                int leftHalfEnd = 
                    (aCount == 0)             
                        ? B[bCount - 1]      
                        : (bCount == 0)       
                            ? A[aCount - 1]   
                            : max(A[aCount - 1], B[bCount - 1]); 
                if ((n+m)%2==1)
                {
                    return leftHalfEnd;
                }
              
                int rightHalfStart = 
                    (aCount == n)          
                        ? B[bCount]           
                        : (bCount == m)    
                            ? A[aCount]       
                            : min(A[aCount], B[bCount]);
                return (leftHalfEnd + rightHalfStart) / 2.0;
            }
        }
        return 0;
  }
        
};
