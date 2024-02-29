public class InsertionSortJava {
	public static void InsertSort(int[] vec)
	{
		int n = vec.length;
		for(int i=1; i<n; i++)
		{
			int aux = vec[i],
				j = i-1;
			while(j>=0 && vec[j]>aux){
				vec[j+1] = vec[j];
				j-=1;
			} 	
			vec[j+1] = aux;
		}
	}

	public static void main(String[] args) {
		int[] vec = {7,6,5,-4,3,2,-1,0};
		System.out.println("Vectorul original: ");
		DisplayVector(vec);
		InsertSort(vec);
		System.out.println("Vectorul sortat: ");
		DisplayVector(vec);
	}
	public static void DisplayVector(int[] vec) {
		for(int value: vec)
			System.out.print(value + " ");
		System.out.println();
	}
}
/*
	------->>>>>i
	{7, 6, 5, -4, 3, 2, -1, 0};
	j<<<<<<--------
1.     v[i] = 6, i=1
		j = i-1 = 0
	v[1] = 7
	j = -1
	v[-1+1] = v[0] = 6
2. {6, 7, 5, -4, 3, 2, -1, 0}
	i=2 j=1 aux=5
	vec[2] = v[1]=7   j=0
	{6, 7, 7, -4, 3, 2, -1, 0}
	i=2 j=0 aux=5
	v[1] = v[0] = 6
	{6, 6, 7, -4, 3, 2, -1, 0}
	j = -1 
	vec[0] = 5
	{5, 6, 7, -4, 3, 2, -1, 0}
3.  i=3,  j=2, aux =-4
	v[3] = v[2] =7
	j=1
	{5, 6, 7, 7, 3, 2, -1, 0}
	v[2] = v[1] = 6
	j=0
	{5, 6, 6, 7, 3, 2, -1, 0}
	v[1] = v[0] =5
	{5, 5, 7, 7, 3, 2, -1, 0}
	j=-1 v[0] = -4
4.	{-4, 5, 6, 7, 3, 2, -1, 0}
 	i=4 j=3 aux = 3
	vec[4] = vec[3] = 7 
	{-4, 5, 6, 7, 7, 2, -1, 0}
	j=2
	vec[3] = vec[2]= 6
	{-4, 5, 6, 6, 7, 2, -1, 0}
	j=1
	vec[2] = vec[1] = 5
	{-4, 5, 5, 6, 7, 2, -1, 0}
	j=0
	v[1] =3
5.	{-4, 3, 5, 6, 7, 2, -1, 0}
	i=5 j=4 aux=2
	vec[5] = vec[4] = 7
	{-4, 3, 5, 6, 7, 7, -1, 0}
	j=3
	vec[4] = vec[3]
	{-4, 3, 5, 6, 6, 7, -1, 0}
	j=2
	vec[3] = vec[2] = 5
	{-4, 3, 5, 5, 6, 7, -1, 0}
	j=1
	vec[2] = vec[1] = 3
	{-4, 3, 3, 5, 6, 7, -1, 0}
    j=0
    {-4, 2, 3, 5, 6, 7, -1, 0}
    
           i:1 2 3 4 5 6 7 8
            aux = vec[i] = 6
            j= i-1 = 0
            vec[0] = 7
*/