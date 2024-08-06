class Solution {
  public:
    int isValid(string str) {
        int temp=-1,count=0,index=-1;
        for(int i=0;i<str.length();i++){
            if(str[i]=='.'){
                count++;
                if(temp<0 or temp>255)return false;
                if(temp!=0 and str[index+1]=='0')return false;
                temp=-1;
                index=i;
            }
            else{
                if(temp==-1)temp=0;
                temp=temp*10+(str[i]-'0');
            }
        }
        if(temp<0 or temp>255 or count!=3)return false;
        if(temp!=0 and str[index+1]=='0')return false;
        return true;
        // code here
    }
};
