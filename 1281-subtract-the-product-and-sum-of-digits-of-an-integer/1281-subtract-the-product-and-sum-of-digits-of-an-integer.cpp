class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int sum=0;
        int product=1;
        while(n){
            sum = sum + n%10;
            product = product * (n%10);
            n = n/10;
        }
        return (product - sum);
    }
};

///////USING STRING WAY /////
/*
string s = to_string(n);
int sum=0;
int product=1;
for(int i=0; i<s.length(); i++){
    product *= (s[i]-48);
    sum += (s[i]-48);
}
return (product - sum);
*/