class string_args {
	public static void main( String args[] )
{
	System.out.println("args[0]="+args[0]);
	System.out.println("args[1]="+args[1]);
	System.out.println("args[2]="+args[2]);

	for(int i=0; i<args.length; i++) {
		System.out.println( args[i] );
	}
}
// Se compileaza  cu java nume_file nume[var]
}