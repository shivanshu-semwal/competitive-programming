#include <bits/stdc++.h>

bool uniqueOccurrences(std::vector<int>& arr) {
    std::unordered_map<int, int> hash_count;
    for(auto x : arr){
        hash_count[x]++;
    }
    std::unordered_set<int> uniq;
    for(auto x : hash_count){
        if(uniq.find(x.second) != uniq.end()){
            return false;   
        }
        else{
            uniq.insert(x.second);
        } 
    }
    return true;
}

int main() {

    int n;
    std::cin >> n;
    std::vector<int> a;
    int num;

    for (int i = 0; i < n; i++) {
        std::cin >> num;
        a.emplace_back(num);
    }

    std::cout << (uniqueOccurrences(a)? "true" : "false") << std::endl;

    return 0;
}