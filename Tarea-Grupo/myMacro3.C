void myMacro3 ()
{	
	//WRITE HERE YOUR OWN CODE
	TH1D h("miHistograma", "Ejercicio2", 64, -5, 5);
	h.FillRandom("gaus");
	TF1 f("g", "gaus", -5,5);
	h.Fit(&f);
	f.SetParameters(360, 0.0087, 1);
	//TCanvas *c1=new Canvas("c1","",600,800);
	gStyle->SetOptStat(1111111111);
	TCanvas c1;
	h.Draw();
	f.Draw("same");
	c1.SaveAs("histograma.pdf");
	c1.SaveAs("histograma.C");
}
