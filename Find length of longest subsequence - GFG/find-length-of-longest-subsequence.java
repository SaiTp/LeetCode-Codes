// { Driver Code Starts
//Initial Template for Java
import java.io.*;
import java.util.*; 
class GFG{
    public static void main(String args[]) throws IOException { 
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        
        while(t-- > 0){
            String input_line[] = read.readLine().trim().split("\\s+");
            int N = Integer.parseInt(input_line[0]);
            int M = Integer.parseInt(input_line[1]);
            input_line = read.readLine().trim().split("\\s+");
            String X = input_line[0];
            String Y = input_line[1];
            Solution obj = new Solution();
            int ans = obj.maxSubsequenceSubstring(X, Y, N, M); 
            System.out.println(ans);
        }
    } 
} // } Driver Code Ends


//User function Template for Java
class Solution 
{ 
    int maxSubsequenceSubstring(String X, String Y, int N, int M) 
    {
        // code here
        int max=0;
        for(int i=0;i<Y.length();i++) {
            int k=i;
            int req=0;
            for(int j=0;j<X.length() && k<Y.length();j++) {
                if(X.charAt(j)==Y.charAt(k)) {
                    k++;
                    req++;
                }
            }
            max=Math.max(max, req);
        }
        return max;
    }
} 