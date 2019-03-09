#include <iostream>
using namespace std;

// merge sort: https://qiita.com/wabisuke2718/items/5ec44eb5be01b5e62fb3
void merge(long long int n[], long long int b[], int left, int mid, int right)
{
    int num = right - left;
    int *tmp = new int[num];
    int *tmp2 = new int [num];

    int iw = 0;
    int il = left;
    int ir = mid;
    //add
    int iw2 = 0;
    int il2 = left;
    int ir2 = mid;

    while (il < mid && ir < right)
    {
        if (n[il] <= n[ir])
        {
            tmp[iw++] = n[il++];
            tmp2[iw2++] = b[il2++];//add
        } else {
            tmp[iw++] = n[ir++];
            tmp2[iw2++] = b[ir2++];//add
        }
    }

    while (il < mid)
    {
        tmp[iw++] = n[il++];
        tmp2[iw2++] = b[il2++];
    }
    while (ir < right)
    {
        tmp[iw++] = n[ir++];
        tmp2[iw2++] = b[ir2++];
    }

    for (int i=0; i<num; i++)
    {
        n[left + i] = tmp[i];
        b[left + i] = tmp2[i];
    }

    delete[] tmp;
    delete[] tmp2;
}


void merge_sort_sub(long long int n[], long long int b[], int left, int right)
{
    if (right - left <= 1) return;

    int mid = left + (right - left) / 2;
    merge_sort_sub(n, b, left, mid);
    merge_sort_sub(n, b, mid, right);

    merge(n, b, left, mid, right);
}


void merge_sort(long long int n[], long long int b[], int len)
{
    merge_sort_sub(n, b, 0, len);
}

int main()
{
    int N, M;
    cin >> N >> M;
    long long int a[N];
    long long int b[N];
    for(int i = 0; i < N; i++)
    {
        cin >> a[i] >> b[i];
    }

    merge_sort(a, b, N);

    long long int cost = 0;
    long long int count = 0;
    for(int i = 0; i < N; i++)
    {
        if(count + b[i] <= M)
        {
            cost += a[i]*b[i];
            count += b[i];
        }
        else
        {
            cost += a[i]*(M-count);
            count += (M-count);
            break;
        }
    }

    cout << cost << endl;

    return 0;
}