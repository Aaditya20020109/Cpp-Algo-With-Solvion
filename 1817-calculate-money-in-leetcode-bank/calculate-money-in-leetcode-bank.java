class Solution {
    public int totalMoney(int n) {
        int res =0;
        int prevMonday =0;
        while(n>0)
        {
            int money = prevMonday+1;
            for(int i=0;i<7;i++)
            {
                if(n==0)break;
                res+=money;
                money+=1;
                n--;
            }
            prevMonday+=1;
        }
        return res;
        
    }
}