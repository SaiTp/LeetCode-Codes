class Solution {
public:
    int findComplement(int num) {
      int i=num;
        int bitNum=0;//numbers of bit in num
        while(i!=0){
            i>>=1;
            bitNum<<=1;
            bitNum|=1;          
        }
        return num^bitNum;
    }
};