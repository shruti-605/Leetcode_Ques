//reverse a number
//int main(){
//	int n;
//	cin>>n;
//	int ans;
//	while(n!=0){
//		int digit=n%10;
//		ans=ans*10+digit;
//		n=n/10;
//	}
//	cout<<ans<<endl;
//}
//amstrong number
//1 5 3=1 125 27=153
int main(){
	int n;
	cin>>n;
	int ans=0;
	int originaln=n;
	while(n!=0){
		int digit=n%10;
		ans+=pow(digit,3);
		n=n/10;	
	}
	if(ans==originaln){
		cout<<"Armstrong number"<<endl;
	}else{
		cout<<"not Armstrong number"<<endl;
	}
}
