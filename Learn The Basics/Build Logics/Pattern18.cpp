void alphaTriangle(int n) {
    for(int i = 0; i < n; i++) {
        for(char ch = 'C' + i; ch >= 'C'; ch--) {
            cout << ch << " ";
        }
        cout << endl;
    }
}
