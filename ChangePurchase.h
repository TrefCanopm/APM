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
	/// ������ ��� ChangePurchase
	/// </summary>
	public ref class ChangePurchase : public System::Windows::Forms::Form
	{
	public:
		ChangePurchase(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~ChangePurchase()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: String^ str = "";
	private: String^ FileName = "Fil Purchase Orders For Materials.txt";
	private: int K = 0;
	private: bool f = 1;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(281, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(32, 86);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(177, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"������� ����� �������� ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(240, 86);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(35, 139);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(171, 139);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 4;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(312, 139);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(376, 85);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"�����";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ChangePurchase::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 218);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"������";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ChangePurchase::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(445, 218);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(184, 23);
			this->button3->TabIndex = 8;
			this->button3->Text = L"��������� ���������";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &ChangePurchase::button3_Click);
			// 
			// ChangePurchase
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(641, 253);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ChangePurchase";
			this->Text = L"ChangePurchase";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (textBox1->Text == "")
		{
			MessageBox::Show(this, "������� ����� ��������!!!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			StreamReader^ file = File::OpenText(FileName);
			String^ a;
			String^ line;
			while (f)
			{
				line = file->ReadLine();
				for (int i = 0; line[i] != '-'; i++)
				{
					a = a + line[i];
				}
				if (a == textBox1->Text)
				{
					f = 0;
				}
				else
				{
					str = line + "\n";
				}
				K++;
				a = "";

			}
			file->Close();
			if (!f)
			{
				int N = 0;
				for (int i = 0; i < line->Length; i++)
				{
					if (line[i] != '-')
					{
						a += line[i];
					}
					else
					{
						switch (N)
						{
						case 1: textBox2->Text = a; break;
						case 2: textBox3->Text = a; break;
						case 3: textBox4->Text = a; break;
						}
						N++;
						a = "";
					}
				}
			}
			else
			{
				MessageBox::Show(this, "�������� � �������� ����� ��� � �������", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (!f)
	{
		String^ a = textBox1->Text + "-" + textBox2->Text + "-" + textBox3->Text + "-" + textBox4->Text + "-";
		StreamReader^ file = File::OpenText(FileName);
		String^ line = "";
		for (int i = 0; i < K + 1; i++)
		{
			line = file->ReadLine();
		}
		str += a + "\n";
		while ((line != nullptr) && (line != ""))
		{
			str += line + "\n";
			line = file->ReadLine();
		}
		file->Close();
		File::Delete(FileName);
		StreamWriter^ file1 = File::CreateText(FileName);
		file1->Write(str);
		file1->Close();
	}
	else
	{
		MessageBox::Show(this, "������ �������� �� ��������� �������.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	textBox4->Text = "";
	f = 1;
	K = 0;
	str = "";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}
};
}