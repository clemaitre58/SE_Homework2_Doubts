int find_min_max(int arr[]);

int sort_mode(){
    int num_e = 10;
    int arr[num_e];
    int result[2];
    cout << "Enter 10 numbers (press Enter afterwards): " << "\n";
    for (int i = 0; i < num_e; ++i) {
        cin >> arr[i];
    }
    result = find_min_max(arr);
    return result;
}

int find_min_max(int arr[]) {
    int num_e = 10;
    int result[2] = {arr[0], arr[0]};
    for (int i=0; i<num_e; i++){
            if (arr[i] > result[1]) {
                result[1] = arr[i];
            } else if (arr[i] < result[0]) {
                result[0] = arr[i];}
            }
    return result;
}
