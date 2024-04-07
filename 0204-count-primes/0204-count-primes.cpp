class Solution {
public:
    int countPrimes(int n) {
       int count=0;
       vector<bool>primes(n,true);
       if(n==0 || n==1) return 0;
       primes[0]=primes[1]=false;
       for(int i=2;i<sqrt(n);i++){
              if(primes[i]){
                    int j = i*i;
                    while(j<n){
                           primes[j] = false;
                           j+=i;
                    }
              }
       }
       for(int i=2;i<primes.size();i++){
              if(primes[i]) count++;
       }
    return count;
    }
};