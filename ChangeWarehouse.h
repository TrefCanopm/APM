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
	/// ������ ��� ChangeWarehouse
	/// </summary>
	public ref class ChangeWarehouse : public System::Windows::Forms::Form
	{
	public:
		ChangeWarehouse(void)
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
		~ChangeWarehouse()
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
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: String^ FileName = "Fil Warehouse Resource.txt";
	private: String^ str = "";
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(610, 203);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"�������� ���������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ChangeWarehouse::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(23, 190);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"�������";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ChangeWarehouse::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(281, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(132, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"��������� ������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(33, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(174, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"������� ����� ��������";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(213, 77);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 4;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(329, 77);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"�����";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &ChangeWarehouse::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(23, 133);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(141, 133);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(626, 133);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 8;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(270, 137);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(18, 17);
			this->checkBox1->TabIndex = 9;
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// ChangeWarehouse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(727, 253);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"ChangeWarehouse";
			this->Text = L"ChangeWarehouse";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
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
					str = line+"\n";
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
						case 3:
							if (a == "1")
								checkBox1->Checked = 1;
							else
								checkBox1->Checked = 0;
							a = "";
							break;
						case 4:
							textBox4->Text = a; break;
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
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (!f)
	{
		String^ D = "";
		if (checkBox1->Checked)
			D = "1";
		else
			D = "0";
		String^ a =textBox1->Text+"-"+textBox2->Text + "-" + textBox3->Text + "-" + D + "-" + textBox4->Text + "-";
		StreamReader^ file = File::OpenText(FileName);
		String^ line = "";
		for (int i = 0; i < K+1; i++)
		{
			line = file->ReadLine();
		}
		str += a + "\n";
		while (line != nullptr)
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
	checkBox1->Checked = 0;
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
