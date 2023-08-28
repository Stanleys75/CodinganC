#include <stdio.h>

int binarySearch(long long int arr[], int a, int b, long long int cari) {
    if (b >= a) {
        long long int mid = a + (b - a) / 2;
        if (cari >= arr[mid] && mid == b) {
            return mid+1;
        }
        if (cari >= arr[mid] && cari < arr[mid+1]) {
            return mid+1;
        }
        if (cari < arr[mid] && cari < arr[mid+1]) {
            return binarySearch(arr, a, mid-1, cari);
        }
        return binarySearch(arr, mid+1, b, cari);
    }
    return -1;
}

int main() {
    int N, Q;
    scanf("%d", &N);
    
    long long int arr[N+1];
    long long int arr2[N+1];
    
    for (int i=0; i<N; i++) {
        scanf("%lld", &arr[i]);
    }
    
    for (int i=0; i<N; i++) {
        if (i!=0) {
            arr[i]+=arr[i-1];
        }
    }
    
    for (int i=0; i<N; i++) {
        arr2[i] = arr[i];
    }
    
  
    scanf("%d", &Q);
    for (int j=0; j<Q; j++) {
        long long int angka;
        scanf("%lld", &angka);
        
        long long int hasil = binarySearch(arr2, 0, N-1, angka);
        printf("Case #%d: %lld\n", j+1, hasil);
    }
}
