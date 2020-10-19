    int findComplement(int num) {
        if(num==0) return 1;
        int ans=0;
        int mul=1;
        while(num)
        {
            int currBit = num&1;
            num >>= 1;
            ans += mul *(1-currBit);
            mul <<= 1;
        }
        return ans;
    }
}