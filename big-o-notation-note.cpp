
// Constant: O(1) :
void printFirstElementOfArray(int arr[])
{
    printf("First element of array = %d",arr[0]);
}

//Linear: O(n):

int n;
cin>>n;
int a = 0;
for (int i = 1; i<=n; i++){
    a = a + 1;
}

//Quadratic: O(n²):

int n;
cin>>n;
int a = 0;
for (int i = 1; i <= n; i++){
    for (int j = 1; j <= n; j++){
        a = a + 1;
    }
}

//Time Complexity O(n*m):

int n, m;
cin>>n>>m;
int a = 0;
for (int i = 1; i <= n; i++){
    for (int j = 1; j <= m; j++){
        a = a + rand();
    }
}

// O(2^n)
int fibonacci(int num)
{
    if (num <= 1) return num;
    return fibonacci(num - 2) + fibonacci(num - 1);
}

// Logarithmic O(logn):
int main()
{
    int N = 8, k = 0;
 
    // First loop run N/2 times
    for (int i = N / 2; i <= N; i++) {
 
        // Inner loop run log N
        // times for all i
        for (int j = 2; j <= N;
             j = j * 2) {
 
            // Print the value k
            cout << k << ' ';
 
            k = k + N / 2;
        }
    }
 
    return 0;
}
