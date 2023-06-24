void myMacro4 ()
{	
	//WRITE HERE YOUR OWN CODE
	TChain *misDatos = new TChain("DecayTree","");
	misDatos -> Add("/home/felipe/Proyectos/B2HHH_MagnetUp.root");
	
	TH2F *histograma = new TH2F("histograma", "Mi Histograma 2D", 50,0, 7000, 50, 0, 7000);
	misDatos -> Draw("H1_PX:H1_PY>>histograma");
	
	TCanvas *c1 = new TCanvas("c1","", 600, 800);
	histograma -> Draw();
	c1-> SaveAs("histograma2b.pdf");
	c1->SaveAs("histograma2b.C");
	std::cout << "Número Global:" << histograma -> GetSize() <<std::endl;
	for (int i=1; i<=50; i++){
		for(int j=1; j<=50; j++){
			int bin=histograma-> GetBin(i,j);
			double contenido = histograma -> GetBinContent(bin);
			std::cout<< "Bin :" << bin <<std::endl;
				     }
				}	
}
