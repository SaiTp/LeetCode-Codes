class Solution {
public:
    int minFlips(int a, int b, int c) {
       int count=0;
        for(int i=0;i<32;i++){
            // taking the last bit from a , b ,c 
			int temp1 = ((a >> i) & 1);
            int temp2 = ((b >> i) & 1);
            int temp3 = ((c >> i) & 1);
            
			/* if c==1 so we consider 4 cases in which :
			    a      b
				0      0   -> in this case we have to flip any of the one bit to 1
				0      1
				1      0
				1      1 
			no need to flip the bit as a | b in the last three cases will return 1 , (as c=1 )
			*/
             if(temp3 == 1){
                if(temp1 ==0 && temp2 == 0){
                    count++;
                }
            }
			/* In this case c=0 // so we again consider 4 cases 
			a     b
			0     0 -> no need to flip any bit
			1     0   -> flip the bit of a (count++)
			0     1   -> flip the bit of b (count++) 
			1     1   -> to make ((a | b) ==0 == c ) we have to flip both 'a' and 'b' to 0 so (count += 2) 
			*/
            else{
                if(temp1 ==1 && temp2 == 1){
                    count+=2;
                }
                else if(temp1 ==1 || temp2 ==1){
                    count++;
                }
            }
        }
        return(count);
    }
};