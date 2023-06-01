#pragma once
#include <vector>

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
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
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
			this->Load += gcnew System::EventHandler(this, &Updete::Updete_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Updete_Load(System::Object^ sender, System::EventArgs^ e)
	{
		UpdatePurchase();
		UpdateResource();
	}
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
		StreamReader^ file = File::OpenText(FileNameResource);
		String^ line = file->ReadLine();
	}
	private: void UpdateProduction()
	{

	}
	private: void UpdateFinished()
	{

	}
    private: void UpdateSales()
    {

    }
	};
}
