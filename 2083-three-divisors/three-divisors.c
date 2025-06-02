bool isThree(int n) {
int cd = 0; 
for(int i = n ; i >= 1 ; i--)
   {
    if(n % i == 0)
        {
            cd++;
        }
    }
    if(cd == 3)
    {
        return true;
    }
return false;
}