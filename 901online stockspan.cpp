class StockSpanner {
public:
    stack<pair<int,int>>s;//stores prices span
    StockSpanner() {
        
    }
    
    int next(int price) {
        int span=1;
        while(!s.empty() && s.top().first<=price){
            span+=s.top().second;
            s.pop();
        }
        s.push({price,span});
        return span;
    }
};
