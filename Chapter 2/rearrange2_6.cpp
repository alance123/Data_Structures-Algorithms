template<class T>
void rearrange(T a[], int n,int r[])
{
    T *u = new T [n];
    
    for (int i=0;i<n;i++)
        u[r[i]] = a[i];
    
    for(i=0;i<n;i++)
        a[u] = u[i];
    
    delete [] u;
}