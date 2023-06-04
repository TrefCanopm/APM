#pragma once
#include <vector>
#include <algorithm>

typedef std::vector<int> V_int;

namespace APM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для Updete
	/// </summary>
	public ref class Updete : public System::Windows::Forms::Form
	{
	public:
		Updete(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Updete()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Label^ label1;
	private: String^ FileNameResource = "Fil Warehouse Resource.txt";
	private: String^ FileNameFinished = "Fil Warehouse Finished.txt";
	private: String^ FileNameSales = "Fil Sales Order.txt";
	private: String^ FileNamePurchase = "Fil Purchase Orders For Materials.txt";
	private: String^ FileNameProduction = "Fil Production.txt";
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(12, 51);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(577, 23);
			this->progressBar1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(576, 35);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Обновление данных. Дождитесь завершения обновления.";
			// 
			// timer1
			// 
			// 
			// Updete
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(601, 89);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->progressBar1);
			this->Name = L"Updete";
			this->Text = L"Обновление данных";
			this->Shown += gcnew System::EventHandler(this, &Updete::Updete_Shown);
			this->ResumeLayout(false);

		}
#pragma endregion
	//private: System::Void Updete_Load(System::Object^ sender, System::EventArgs^ e)
	//{
	//	timer1->Start();
	//}
	private: void UpdatePurchase()
	{
		String^ str = "";
		String^ str1 = "";
		String^ S = "";
		String^ S1 = "";
		String^ a = "";
		StreamReader^ file = File::OpenText(FileNamePurchase);
		String^ line = file->ReadLine();
		bool f = 0;
		int N = 0;
		int k = 0;
		int K = 0;
		while ((line != nullptr) && (line != ""))
		{
			for (int i = 0; i < line->Length; i++)
			{
				if (line[i] == '-')
				{
					switch (N)
					{
					case 3:
					{
						K = System::Convert::ToInt32(a);
						if (K - 1 == 0)
						{
							f = 1;
						}
						else
						{
							f = 0;
						}
						a = (K- 1).ToString();
						S += a + "-";
						break;
					}
					default: S += a + "-";
				    }
					a = "";
					N++;
				}
				else
				{
					a += line[i];
				}	
			}
			S = S + "\n";
			N = 0;
			if (f)
			{
				str += S;
				k++;
			}
			else
			{
				if (k == 0)
				{
					str1 += S;
				}
				else
				{
					for (int i = 0; i < S->Length; i++)
					{
						if (S[i] == '-')
						{
							if (N == 0)
							{
								K = System::Convert::ToInt32(a);
								K = K - k;
								a = K.ToString();
								N++;
							}
							S1 += a + "-";
							a = "";
						}
						else
						{
							a += S[i];
						}
					}
					S1 += "\n";
					str1 += S1;
					N = 0;
				}
			}
			S = "";
			S1 = "";
			f = 0;
			line = file->ReadLine();
		}
		file->Close();
		File::Delete(FileNamePurchase);
		StreamWriter^ file1 = File::CreateText(FileNamePurchase);
		file1->Write(str1);
		file1->Close();
		str1 = "";
		K = 0;
		if (k != 0)
		{
			StreamReader^ file = File::OpenText(FileNameResource);
			String^ line = file->ReadLine();
			while ((line != nullptr) && (line != ""))
			{
				str1 += line + "\n";
				K++;
				line = file->ReadLine();
			}
			file->Close();
			for (int i = 0; i < str->Length; i++)
			{
				if (str[i] == '\n')
				{
					N = 0;
					a = "";
				}
				else
				{
					if (str[i] == '-')
					{
						switch (N)
						{
						case 1:
						{
							S += a + "-";
							break;
						}
						case 2:
						{
							S += a + "-" + "\n";
						}
						}
						a = "";
						N++;
					}
					else
					{
						a += str[i];
					}
				}
			}
			f = 1;
			str = S;
			S = "";
			S1 = "";
			a = "";
			String^ b = "";
			String^ b1 = "";
			String^ c = "";
			String^ c1 = "";
			String^ Str = "";
			N = 0;
			int n = 0;
			int N1 = 0;
			int K1 = 0;
			V_int V;
			for (int i = 0; i < str1->Length; i++)
			{
				if (str1[i] == '\n')
				{
					S1 += a + "-" + b + "-" + c + "-"+ S + "\n";
					a = b = c = S = "";
					N = 0;
				}
				else
				{
					if (N < 3)
					{
						if (str1[i] == '-')
						{
							switch (N)
							{
							case 0: a = S; break;
							case 1:
							{
								b = S;
								S = "";
								while ((n < str->Length) && f)
								{
									if (str[n] != '\n')
									{
										if (str[n] == '-')
										{
											switch (N1)
											{
											case 0:
											{
												b1 = S;
												if (b == b1)
												{
													f = 0;
													V.push_back(K1);
													
												}
												else
												{
													b1 = "";
												}
                                                
												break;
											}
											}
											S = "";
											N1++;
										}
										else
										{
											S += str[n];
										}
									}
									else
									{
										K1++;
										N1 = 0;
									}
									n++;
									if (!f)
									{
										while (str[n] != '-')
										{
											S += str[n];
											n++;
										}
										c1 = S;
										S = "";
									}
								}
								n = 0;
								K1 = 0;
								break;
							}
							case 2:
							{
								c = S;
								if (!f)
								{
									int X = System::Convert::ToInt32(c);
									int x = System::Convert::ToInt32(c1);
									X += x;
									c = (X).ToString();
								}
								f = 1;
								break;
							}
							}
							N++;
							S = "";
						}
						else
						{
							S += str1[i];
						}
					}
					else
					{
						S += str1[i];
					}
				}
			}
			n = 0;
			f = 1;			
			int z = 0;
			if (V.size() != 0)
			{
				while (n < str->Length)
				{
					if (str[n] == '\n')
					{
						while ((z < V.size()) && f)
						{
							if (K1 != V[z])
							{
								z++;
							}
							else
							{
								f = 0;
							}
						}
						if (f)
						{
							S1 += ((K + 1).ToString() + "-" + a + "-0--\n");
						}
						f = 1;
						K1++;
						a = "";
						z = 0;
					}
					else
					{
						a += str[n];
					}
					n++;
				}
			}
			File::Delete(FileNameResource);
			StreamWriter^ file1 = File::CreateText(FileNameResource);
			file1->Write(S1);
			file1->Close();
			V.clear();
		}

	}
	private: void UpdateResource()
	{
		String^ S = "";
		String^ a = "";
		String^ b = "";
		String^ c = "";
		String^ d = "";
		String^ f = "";
		String^ er = "";
		int N = 0;
		StreamReader^ file = File::OpenText(FileNameResource);
		String^ line = file->ReadLine();
		while ((line != "") && (line != nullptr))
		{
			for (int i = 0; i < line->Length; i++)
			{
				if (line[i] == '-')
				{
					switch (N)
					{
					case 0: a = S; break;
					case 1: b = S; break;
					case 2: c = S; break;
					case 3: d = S; break;
					case 4: f = S; break;
					}
					N++;
					S = "";
					if (N == 5)
					{
						N = 0;
					}
				}
				else
				{
					S += line[i];
				}
			}
			if (d == "1")
			{
				if (System::Convert::ToInt32(f) > System::Convert::ToInt32(c))
				{
					er += b+", ";
				}
			}
			a = b = c = d = f = "";
			line = file->ReadLine();
		}
		if (er != "")
		{
			MessageBox::Show(this, "Оформите заказ на покупку следующих материалов: "+er , "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		file->Close();
	}
	private: void UpdateProduction()
	{
		StreamReader^ file = File::OpenText(FileNameProduction);
		String^ line = file->ReadLine();
		String^ StrProd = "";
		String^ Str = "";
		String^ Str1 = "";
		String^ S = "";
		String^ a = "";
		int N = 0;
		bool f = 0;
		while ((line != "") && (line != nullptr))
		{
			for (int i = 0; i < line->Length; i++)
			{
				if (line[i] == '-')
				{
					if (N > 3)
					{
						switch (N)
						{
						case 4:
						{
							Str += S + "-";
						}
						case 5:
						{
							a = S;
							break;
						}
						case 6:
						{
							if ((System::Convert::ToInt32(S) - 1) == 0)
							{
								Str1 += Str + a + "-" + a + "-\n";
								f = 1;
							}
							else
							{
								Str1 += Str + a + "-" + (System::Convert::ToInt32(S) - 1).ToString() + "-\n";
							}
							a = "";
							Str = "";
							break;
						}
						}
						S = "";
					}
					else
					{
						S += line[i];
					}
					N++;
				}
				else
				{
					S += line[i];
				}
			}
			N = 0;
			if (f)
			{
				StrProd += line + "\n";
			}
			f = 0;
			line = file->ReadLine();
		}
		file->Close();
		File::Delete(FileNameProduction);
		StreamWriter^ file1 = File::CreateText(FileNameProduction);
		file1->Write(Str1);
		file1->Close();

		String^ StrResource = "";
		String^ StrFinished = "";
		if (StrProd != "")
		{
			for (int i = 0; i < StrProd->Length; i++)
			{
				if (StrProd[i] != '\n')
				{
					if (StrProd[i] == '-')
					{
						switch (N)
						{
						case 1: StrResource += S + "-"; break;
						case 2: StrResource += S + "-\n"; break;
						case 3: StrFinished += S + "-"; break;
						case 4: StrFinished += S + "-\n"; break;
						}
						N++;
						S = "";
					}
					else
					{
						S += StrProd[i];
					}
				}
				else
				{
					N = 0;
				}
			}

			file = File::OpenText(FileNameResource);
			line = file->ReadLine();
			StrProd = StrResource;
			StrResource = "";
			String^ er = "";
			V_int V = {};
			f = 1;
			int n = 0;
			int N1 = 0;
			int k = 0;

			String^ b = "";
			String^ c1 = "";

			while ((line != nullptr) && (line != ""))
			{
				for (int i = 0; i < line->Length; i++)
				{
					if (line[i] == '-')
					{
						if (N < 3)
						{
							switch (N)
							{
							case 0:StrResource += S + "-"; break;
							case 1:
							{
								b = S;
								while ((n < StrProd->Length) && f)
								{
									while (StrProd[n] != '\n')
									{
										if (StrProd[n] == '-')
										{
											switch (k)
											{
											case 0:
											{
												if (S == a)
												{
													V.push_back(N1);
													f = 0;
												}
												a = "";
												break;
											}
											case 1:
											{
												c1 = a;
											}
											}
											k++;
											a = "";
										}
										else
										{
											a += StrProd[n];
										}
										n++;
									}
									N1++;
									k = 0;
									n++;
								}
								n = 0;
								N1 = 0;
								StrResource += S + "-";
								break;
							}
							case 2:
							{
								if (!f)
								{
									if ((System::Convert::ToInt32(S) - System::Convert::ToInt32(c1)) >= 0)
									{
										S = (System::Convert::ToInt32(S) - System::Convert::ToInt32(c1)).ToString();
									}
									else
									{
										V.erase(V.end() - 1);
									}
								}
								c1 = "";
								f = 1;
								StrResource += S + "-";
							}
							}
							N++;
							S = "";
						}
						else
						{
							S += line[i];
						}
					}
					else
					{
						S += line[i];
					}
				}
				StrResource += S + "\n";
				line = file->ReadLine();
				S = "";
				N = 0;
			}

			file->Close();
			File::Delete(FileNameResource);
			file1 = File::CreateText(FileNameResource);
			file1->Write(StrResource);
			file1->Close();

			Str = "";
			std::sort(V.begin(), V.end());

			for (int i = 0; i < StrProd->Length; i++)
			{
				if (StrProd[i] != '\n')
				{
					if (StrProd[i] == '-')
					{
						if (k == 0)
						{
							a = S;
						}
						k++;
					}
					else
					{
						S += StrProd[i];
					}
				}
				else
				{
					k = 0;
					if (V.size() != 0)
					{
						if (N != V[n])
						{
							er += a + ", ";
						}
						else
						{
							n++;
						}
						N++;
						a = "";
					}
					else
					{
						er += a + ", ";
					}
				}
			}

			S = "";
			N = n = 0;

			if (er != "")
			{
				MessageBox::Show(this, "Для производства не хватает следующих материалов: " + er, "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			if (V.size() != 0)
			{
				for (int i = 0; i < StrFinished->Length; i++)
				{
					if (StrFinished[i] != '\n')
					{

						S += StrFinished[i];
					}
					else
					{
						if (N == V[n])
						{
							Str += S + "\n";
							n++;
						}
						N++;
						S = "";
					}
				}

				StrProd = Str;
				StrFinished = "";
				Str = "";
				V.clear();

				N = n = 0;
				int K = 0;

				file = File::OpenText(FileNameFinished);
				line = file->ReadLine();

				while ((line != nullptr) && (line != ""))
				{
					for (int i = 0; i < line->Length; i++)
					{
						if (line[i] == '-')
						{
							if (N < 3)
							{
								switch (N)
								{
								case 0: StrFinished += S + "-"; break;
								case 1:
								{
									b = S;
									while ((n < StrProd->Length) && f)
									{
										while (StrProd[n] != '\n')
										{
											if (StrProd[n] == '-')
											{
												switch (N1)
												{
												case 0:
												{
													if (S == a)
													{
														V.push_back(N1);
														f = 0;
													}
													break;
												}
												case 1:
												{
													c1 = a;
												}
												}
												N1++;
												a = "";
											}
											else
											{
												a += StrProd[n];
											}
											n++;
										}
										N1 = 0;
										n++;
									}
									n = 0;
									StrFinished += S + "-";
									break;
								}
								case 2:
								{
									if (!f)
									{
										StrFinished += (System::Convert::ToInt32(S) + System::Convert::ToInt32(c1)).ToString() + "-";
										c1 = "";
									}
									else
									{
										StrFinished += S + "-";
									}
									f = 1;
									break;
								}
								}
								N++;
								S = "";
							}
							else
							{
								S += line[i];
							}
						}
						else
						{
							S += line[i];
						}
					}
					StrFinished += S + "\n";
					S = "";
					N = 0;
					K++;
					line = file->ReadLine();
				}

				std::sort(V.begin(), V.end());

				for (int i = 0; i < StrProd->Length; i++)
				{
					if (StrFinished[i] != '\n')
					{
						S += StrFinished[i];
					}
					else
					{
						if (N != V[n])
						{
							Str += S + "\n";
							n++;
						}
						N++;

						S = "";
					}
				}

				StrProd = Str;

				if ((StrProd != "") && (StrProd != nullptr))
				{
					for (int i = 0; i < StrProd->Length; i++)
					{
						if (StrProd[i] == '\n')
						{
							StrFinished += (K + 1).ToString() + S + "0--\n";
							S = "";
						}
						else
						{
							S += StrProd[i];
						}
					}
				}

				file->Close();
				File::Delete(FileNameFinished);
				file1 = File::CreateText(FileNameFinished);
				file1->Write(StrFinished);
				file1->Close();
				V.clear();
			}
		}
	}
	private: void UpdateFinished()
	{
		String^ str = "";
		String^ S = "";
		String^ a = "";
		String^ b = "";
		String^ c = "";
		String^ d = "";
		String^ f = "";
		String^ er = "";
		int N = 0;
		StreamReader^ file = File::OpenText(FileNameFinished);
		String^ line = file->ReadLine();
		while ((line != "") && (line != nullptr))
		{
			for (int i = 0; i < line->Length;i++)
			{
				if (line[i] == '-')
				{
					switch (N)
					{
					case 0: a = S; break;
					case 1: b = S; break;
					case 2: c = S; break;
					case 3: d = S; break;
					case 4: f = S; break;
					}
					S = "";
					N++;
					if (N == 5) N = 0;
				}
				else
				{
					S += line[i];
				}
			}
			if (d == "1")
			{
				if (System::Convert::ToInt32(f) < System::Convert::ToInt32(c))
				{
					er += b + ", ";
				}
			}
			str += a + "-" + b + "-" + c + "-" + d + "-" + f + "-\n";
			line = file->ReadLine();
		}
		if (er != "")
		{
			MessageBox::Show(this, "Оформите заказ на продажу для большого количество следующих товаров: " + er, "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		file->Close();
	}
    private: void UpdateSales()
    {
		String^ str = "";
		String^ str1 = "";
		String^ StrSales = "";
		String^ S = "";
		int N = 0;
		int r = 0;

		String^ a = "";
		String^ b = "";
		String^ c = "";
		String^ c1 = "";

		StreamReader^ file = File::OpenText(FileNameSales);
		String^ line = file->ReadLine();
		while ((line != nullptr) && (line != ""))
		{
			for (int i = 0; i < line->Length; i++)
			{
				if (line[i] == '-')
				{
					switch (N)
					{
					case 0: a = S; break;
					case 1: b = S; break;
					case 2: c = S; break;
					case 3:
					{
						if (System::Convert::ToInt32(S) - 1 != 0)
						{
							str += a + "-" + b + "-" + c + "-" + (System::Convert::ToInt32(S) - 1).ToString() + "-\n";
						}
						else
						{
							StrSales += a + "-" + b + "-" + c + "-\n";
							str += a + "-" + b+"-" + c + "-" + "0-\n";
						}
						break;
					}
					}

					N++;
					S = "";
				}
				else
				{
					S += line[i];
				}
			}

			S = "";
			N = 0;
			line = file->ReadLine();
		}

		a = b = c = "";
		file->Close();
		File::Delete(FileNameSales);
		StreamWriter^ file1 = File::CreateText(FileNameSales);
		file1->Write(str);
		file1->Close();

		str = "";

		if (StrSales != "")
		{
			int n = 0;
			bool f = 1;
			int N1 = 0;

			file = File::OpenText(FileNameFinished);
			line = file->ReadLine();
			V_int V;
			int K = 0;
			while ((line != "") && (line != nullptr))
			{
				for (int i = 0; i < line->Length;i++)
				{
					if (line[i] == '-')
					{
						if (N < 3)
						{
							switch (N)
							{
							case 0: a = S; break;
							case 1: b = S; break;
							case 2:
							{
								while ((n < StrSales->Length) && f)
								{
									while (StrSales[n] != '\n')
									{
										if (StrSales[n] == '-')
										{
											switch (N1)
											{
											case 1:
											{
												if (b == str)
												{
													V.push_back(K);
													f = 0;
												}
												break;
											}
											case 2: c = str; break;
											}
											str = "";
											N1++;
										}
										else
										{
											str += StrSales[n];
										}
										n++;
									}
									K++;
									N1 = 0;
									n++;
								}
								K = 0;
								n = 0;
								if (!f)
								{
									if ((System::Convert::ToInt32(S) - System::Convert::ToInt32(c)) < 0)
									{
										V.erase(V.end() - 1);
										c = S;
									}
									else
									{
										c = (System::Convert::ToInt32(S) - System::Convert::ToInt32(c)).ToString();
									}
								}
								else
								{
									c = S;
								}
								f = 1;
							}
							}

							N++;
							S = "";
						}
						else
						{
							S += line[i];
						}
					}
					else
					{
						S += line[i];
					}
				}

				str1 += a + "-" + b + "-" + c + "-" + S + "\n";
				S = "";
				N = 0;
				line = file->ReadLine();
			}

			std::sort(V.begin(), V.end());
			String^ er = "";
			String^ er1 = "";

			N1 = n = 0;

			if (V.size() != 0)
			{
				for (int i = 0; i < StrSales->Length; i++)
				{
					if (StrSales[i] == '\n')
					{
						if (N1 != V[n])
						{
							er += b + ", ";
							er1 += a + ", ";
						}
						else
						{
							n++;
						}
						N = 0;
						N1++;
					}
					else
					{
						if (StrSales[i] == '-')
						{
							switch (N)
							{
							case 0: a = S; break;
							case 1: b = S; break;
							}
							N++;
							S = "";
						}
						else
						{
							S += StrSales[i];
						}
					}
				}
			}
			else
			{
				for (int i = 0; i < StrSales->Length; i++)
				{
					if (StrSales[i] == '\n')
					{
						er += b + ", ";
						er1 += a + ", ";
						N = 0;
					}
					else
					{
						if (StrSales[i] == '-')
						{
							switch (N)
							{
							case 0: a = S; break;
							case 1: b = S; break;
							}
							N++;
							S = "";
						}
						else
						{
							S += StrSales[i];
						}
					}
				}
			}
			if (er != "")
			{
				MessageBox::Show(this, "Просрочено время на отгрузку следующих товаров: " + er + "\n" + "Внесите изменение во время отгрузки следующих записей: " + er1, "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			file->Close();
			File::Delete(FileNameFinished);
			StreamWriter^ file1 = File::CreateText(FileNameFinished);
			file1->Write(str1);
			file1->Close();

			f = 1;
			N = n = 0;
			S = str = str1 = "";
			file = File::OpenText(FileNameSales);
			line = file->ReadLine();
			while ((line != nullptr) && (line != ""))
			{
				for (int i = 0; i < line->Length;i++)
				{
					if (line[i] == '-')
					{
						if ((N != 1))
						{
							switch (N)
							{
							case 0: a = S; break;
							case 2: b = S; break;
							case 3:
							{
								if (S == "0")
								{
									while ((n < er1->Length) && f)
									{
										if (er1[n] == ',')
										{
											if (a == str1)
												f = 0;
											str1 = "";
										}
										else
										{
											if(er1[n] != ' ')
												str1 += er1[n];
										}
										n++;
									}
									n = 0;
									r++;
								}
								else
								{
									str += (System::Convert::ToInt32(a)-r).ToString() + "-" + b + "-" + S + "-\n";
								}
								if (!f)
								{
									r--;
									str += (System::Convert::ToInt32(a) - r).ToString() + "-" + b + "-" + S + "-\n";
								}
								f = 1;
							}
							case 4: N = 0; break;
							}
							S = "";
						}
						else
						{
							S += line[i];
						}
						N++;
					}
					else
					{
						S += line[i];
					}
				}
				N = 0;
				line = file->ReadLine();
			}
			file->Close();
			File::Delete(FileNameSales);
			file1 = File::CreateText(FileNameSales);
			file1->Write(str);
			file1->Close();
	     V.clear();
		}
    }
private: System::Void Updete_Shown(System::Object^ sender, System::EventArgs^ e) {
	progressBar1->Value = 10;
		UpdatePurchase();
		progressBar1->Value = 30;
		UpdateResource();
		progressBar1->Value = 50;
		UpdateProduction();
		progressBar1->Value = 70;
		UpdateFinished();
		progressBar1->Value = 90;
		UpdateSales();
		progressBar1->Value = 100;
		this->Close();
}
};
}
