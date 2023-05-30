#pragma once

namespace APM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// —водка дл€ DelPurchase
	/// </summary>
	public ref class DelPurchase : public System::Windows::Forms::Form
	{
	public:
		DelPurchase(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~DelPurchase()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: String^ FileName = "Fil Purchase Orders For Materials.txt";

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(374, 218);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"”далить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DelPurchase::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(24, 218);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"ќтмена";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &DelPurchase::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(21, 80);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(232, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"¬ведите номер удол€емой записи";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(283, 80);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 3;
			// 
			// DelPurchase
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(461, 253);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"DelPurchase";
			this->Text = L"DelPurchase";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (textBox1->Text == "")
		{
			MessageBox::Show(this, "¬ведите значение!!!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			int I = 0;
			int k1 = 0;
			int KL = 0;
			int kl = 0;
			int k = 0;
			bool f = 0;
			StreamReader^ file = File::OpenText(FileName);
			String^ a;
			String^ line = file->ReadLine();
			while ((line != nullptr) && (line != ""))
			{

				for (int i = 0; line[i] != '-'; i++)
				{
					a = a + line[i];
				}
				if (a == textBox1->Text)
				{
					k1 = k;
					f = 1;
				}
				k++;
				a = "";
				line = file->ReadLine();
			}
			file->Close();
			if (f)
			{
				String^ str = "";
				StreamReader^ file = File::OpenText(FileName);

				a = "";

				while (k > I)
				{
					line = file->ReadLine();
					if (I == k1)
					{
						f = 0;
					}
					else
					{
						if (f)
						{
							str += line + "\n";
						}
						else
						{
							for (int n = 0; line[n] != '-'; n++)
							{
								a += line[n];
								kl++;
							}
							KL = System::Convert::ToInt32(a);
							KL--;
							a = KL.ToString();
							for (int n = kl; n < line->Length;n++)
							{
								a += line[n];
							}
							str += a + "\n";
						}
						kl = 0;
						a = "";
					}
					I++;
				}
				file->Close();
				File::Delete(FileName);
				StreamWriter^ file1 = File::CreateText(FileName);;
				file1->Write(str);
				file1->Close();
			}
			else
			{
				MessageBox::Show(this, "Ёлемента с введЄнным номер нет в таблице", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			textBox1->Text = "";
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Close();
	}
};
}
