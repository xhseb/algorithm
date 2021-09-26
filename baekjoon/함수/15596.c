long long sum(int *a, int n) {
	long long ans = 0;
    int i = -1;
    
    while (++i < n)
    {
        ans += a[i];
    }
	return ans;
}
