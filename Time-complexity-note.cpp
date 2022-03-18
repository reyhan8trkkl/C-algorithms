//Example 1
for(i= 0 ; i < n; i++){ // 1 , n+1 , n
   cout<< i << " " ; // n
   i++; // n
}
// T(n) = 1 + n+1 + n + n + n = 4n +2 => O(n)

//Example 2

for(i= 0 ; i < n; i++){ // 1 , n+1 , n
   for(j = 0; j<n ;j++){ // (from first loop)n*(1 , n+1 , n)
      cout<< i << " "; // n*n
   }
}
// T(n) = 1 + n+1 + n + 2n^2 + 2n + n^2 = 3n^2 + 4n + 2 => O(n^2)
