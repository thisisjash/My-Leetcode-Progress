class Solution {
public:
    string removeKdigits(string num, int k) {
        int i,j=k, ind=-1,count=0, k1=k;
        for(i=0;i<num.length();i++)
        {
            if(j<0)
                break;
            if(num[i]=='0')
            {  
                if(i<=k+count)
                {  
                    count++;
                    ind=i;
                    k1=j;
                    continue;
                }
            }
            else{
            j--;}
        }
        cout<<ind<< " "<<k1<<endl;
       
        if(ind+1>=num.length() || k1>=num.length()-ind-1)
        {   
            return "0";
        }
        else if(k1<=0)
        {
            return num.substr(ind+1,num.length());
        }
        else
        {   ind++;
            int l= num.length();
            string s = num.substr(ind,l);
            // cout<<k1<<endl;
            while(k1>0)
            { cout<<s<<endl;
                string s2;
             int f=0;
             int i=0;
                for(i=0;i<s.length()-1 ;i++)
                { 
                    if(s[i]>s[i+1] && k1>0)
                    {  f++;
                        k1--;
                     s2+=s.substr(i+1,s.length());
                         break;
                    }
                    else{
                        s2+=s[i];
                    }
                }
             if (f==0){ 
                 // cout<<s2;
                 s2=s2.substr(0,s2.length());
                 k1--;
             }
             
             s=s2;
            // cout<<k1;
             //cout<<endl<<s;
            }
         if(s.length()==0)
            return "0";
         else
             return s;
        }
        }
};