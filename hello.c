void main(){
	FILE *fp = fopen("readme.txt","a");
	while (!fprintf("fp","Hello world"))
}