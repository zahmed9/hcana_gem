//Latif Kabir < jlab.org/~latif >

{
    if (TClass::GetDict("THcAnalyzer"))
    {
	cout << "\nAttempting to load libGEM.so ... ";
	int status = gSystem->Load("libGEM.so");
	if(status>-1)
	    cout << "attempt completed !!\n";
	else
	    cout << "attempt failed.\n";
    }
}
