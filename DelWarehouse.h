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
	/// —водка дл€ DelWarehouse
	/// </summary>
	public ref class DelWarehouse : public System::Windows::Forms::Form
	{
	public:
		DelWarehouse(void)
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
		~DelWarehouse()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: String^ FileName = "Fil Warehouse Resource.txt";

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(485, 23);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(126, 27);
			this->textBox1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(3, 23);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(474, 27);
			this->label2->TabIndex = 2;
			this->label2->Text = L"¬ведите номер элемента который надо удолить";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(284, 70);
			this->button1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(327, 32);
			this->button1->TabIndex = 3;
			this->button1->Text = L"ѕрименить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &DelWarehouse::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(7, 70);
			this->button2->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(269, 32);
			this->button2->TabIndex = 4;
			this->button2->Text = L"ќтмена";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &DelWarehouse::button2_Click);
			// 
			// DelWarehouse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(624, 120);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"DelWarehouse";
			this->Text = L"”даление элемента со склада материаллов";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Close();
	}
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
};
}
