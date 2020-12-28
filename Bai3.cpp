#include <bits/stdc++.h>

using namespace std;

int main() {

  long long N;
  long long a1[5];
  long long a2[5];

  ifstream in;
  in.open("input.txt");
  in >> N;

  for (int i = 0; i < N; i++) {
    in >> a1[i];
  }
  for (int i = 0; i < N; i++) {
    in >> a2[i];
  }

  in.close();
  //ham(co san thu vien) dao nguoc array 
  reverse(a1, a1 + N);
  
  // for(int i=0;i<=N/2;++i)
  // {
  //   int index = N - i - 1;
  //   int tmp = a1[index];
  //   a1[index] = a1[i];
  //   a1[i] = tmp;
  // }
  //kiem tra thu a1 duoc dao chua
  for (int i = 0; i < N; i++) {
    cout << " "<< a1[i];
  }
  cout << endl;
  //in phan tu a2
  for (int i = 0; i < N; i++) {
    cout << " "<< a2[i];
  }
  cout << endl;
  //kiem tra thu vecter C da =A+B chua
  for (int x = 0; x < N; x++) {
    cout << a1[x] + a2[x];
  }
  //ghi ra file
  ofstream out;
  out.open("output.txt");
  for (int x = 0; x < N; x++) {
    out << a1[x] + a2[x];
  }
  return 0;
}