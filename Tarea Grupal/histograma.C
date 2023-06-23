#ifdef __CLING__
#pragma cling optimize(0)
#endif
void histograma()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Sat May  6 18:03:23 2023) by ROOT version 6.26/10
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",0,0,700,500);
   c1_n2->Range(-6.25,-41.34375,6.25,372.0938);
   c1_n2->SetFillColor(0);
   c1_n2->SetBorderMode(0);
   c1_n2->SetBorderSize(2);
   c1_n2->SetFrameBorderMode(0);
   c1_n2->SetFrameBorderMode(0);
   
   TH1D *miHistograma__1 = new TH1D("miHistograma__1","Ejercicio2",64,-5,5);
   miHistograma__1->SetBinContent(5,2);
   miHistograma__1->SetBinContent(10,1);
   miHistograma__1->SetBinContent(12,1);
   miHistograma__1->SetBinContent(13,6);
   miHistograma__1->SetBinContent(14,4);
   miHistograma__1->SetBinContent(15,15);
   miHistograma__1->SetBinContent(16,5);
   miHistograma__1->SetBinContent(17,15);
   miHistograma__1->SetBinContent(18,22);
   miHistograma__1->SetBinContent(19,39);
   miHistograma__1->SetBinContent(20,50);
   miHistograma__1->SetBinContent(21,55);
   miHistograma__1->SetBinContent(22,85);
   miHistograma__1->SetBinContent(23,96);
   miHistograma__1->SetBinContent(24,129);
   miHistograma__1->SetBinContent(25,169);
   miHistograma__1->SetBinContent(26,190);
   miHistograma__1->SetBinContent(27,224);
   miHistograma__1->SetBinContent(28,215);
   miHistograma__1->SetBinContent(29,262);
   miHistograma__1->SetBinContent(30,287);
   miHistograma__1->SetBinContent(31,309);
   miHistograma__1->SetBinContent(32,315);
   miHistograma__1->SetBinContent(33,303);
   miHistograma__1->SetBinContent(34,313);
   miHistograma__1->SetBinContent(35,274);
   miHistograma__1->SetBinContent(36,244);
   miHistograma__1->SetBinContent(37,261);
   miHistograma__1->SetBinContent(38,212);
   miHistograma__1->SetBinContent(39,193);
   miHistograma__1->SetBinContent(40,160);
   miHistograma__1->SetBinContent(41,120);
   miHistograma__1->SetBinContent(42,106);
   miHistograma__1->SetBinContent(43,90);
   miHistograma__1->SetBinContent(44,66);
   miHistograma__1->SetBinContent(45,43);
   miHistograma__1->SetBinContent(46,33);
   miHistograma__1->SetBinContent(47,32);
   miHistograma__1->SetBinContent(48,18);
   miHistograma__1->SetBinContent(49,13);
   miHistograma__1->SetBinContent(50,9);
   miHistograma__1->SetBinContent(51,7);
   miHistograma__1->SetBinContent(52,2);
   miHistograma__1->SetBinContent(55,3);
   miHistograma__1->SetBinContent(57,1);
   miHistograma__1->SetBinContent(58,1);
   miHistograma__1->SetEntries(5000);
   
   TF1 *g1 = new TF1("g","gaus",-5,5, TF1::EAddToList::kNo);
   g1->SetFillColor(19);
   g1->SetFillStyle(0);
   g1->SetLineColor(2);
   g1->SetLineWidth(2);
   g1->SetChisquare(37.58411);
   g1->SetNDF(43);
   g1->GetXaxis()->SetLabelFont(42);
   g1->GetXaxis()->SetTitleOffset(1);
   g1->GetXaxis()->SetTitleFont(42);
   g1->GetYaxis()->SetLabelFont(42);
   g1->GetYaxis()->SetTitleFont(42);
   g1->SetParameter(0,308.5501);
   g1->SetParError(0,5.393124);
   g1->SetParLimits(0,0,0);
   g1->SetParameter(1,0.01473783);
   g1->SetParError(1,0.01436246);
   g1->SetParLimits(1,0,0);
   g1->SetParameter(2,1.003654);
   g1->SetParError(2,0.01035825);
   g1->SetParLimits(2,0,10.16178);
   g1->SetParent(miHistograma__1);
   miHistograma__1->GetListOfFunctions()->Add(g1);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.575,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("miHistograma");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 5000   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.008097");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  1.018");
   ptstats_LaTex = ptstats->AddText("Underflow =      0");
   ptstats_LaTex = ptstats->AddText("Overflow  =      0");
   ptstats_LaTex = ptstats->AddText("Integral =   5000");
   ptstats_LaTex = ptstats->AddText("Skewness = 0.0008289");
   ptstats_LaTex = ptstats->AddText("Kurtosis = 0.08135");
   ptstats->SetOptStat(1111111111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   miHistograma__1->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(miHistograma__1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   miHistograma__1->SetLineColor(ci);
   miHistograma__1->GetXaxis()->SetLabelFont(42);
   miHistograma__1->GetXaxis()->SetTitleOffset(1);
   miHistograma__1->GetXaxis()->SetTitleFont(42);
   miHistograma__1->GetYaxis()->SetLabelFont(42);
   miHistograma__1->GetYaxis()->SetTitleFont(42);
   miHistograma__1->GetZaxis()->SetLabelFont(42);
   miHistograma__1->GetZaxis()->SetTitleOffset(1);
   miHistograma__1->GetZaxis()->SetTitleFont(42);
   miHistograma__1->Draw("");
   
   TF1 *g2 = new TF1("g","gaus",-5,5, TF1::EAddToList::kDefault);
   g2->SetFillColor(19);
   g2->SetFillStyle(0);
   g2->SetLineColor(2);
   g2->SetLineWidth(2);
   g2->SetChisquare(37.58411);
   g2->SetNDF(43);
   g2->GetXaxis()->SetLabelFont(42);
   g2->GetXaxis()->SetTitleOffset(1);
   g2->GetXaxis()->SetTitleFont(42);
   g2->GetYaxis()->SetLabelFont(42);
   g2->GetYaxis()->SetTitleFont(42);
   g2->SetParameter(0,360);
   g2->SetParError(0,5.393124);
   g2->SetParLimits(0,0,0);
   g2->SetParameter(1,0.0087);
   g2->SetParError(1,0.01436246);
   g2->SetParLimits(1,0,0);
   g2->SetParameter(2,1);
   g2->SetParError(2,0.01035825);
   g2->SetParLimits(2,0,10.16178);
   g2->Draw("same");
   
   TPaveText *pt = new TPaveText(0.4088218,0.9339831,0.5911782,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Ejercicio2");
   pt->Draw();
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
}
