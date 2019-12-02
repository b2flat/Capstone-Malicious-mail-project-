#pragma once



namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// MyForm�� ���� ����Դϴ�.
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ������ �ڵ带 ���⿡ �߰��մϴ�.
			//
		}

	protected:
		/// <summary>
		/// ��� ���� ��� ���ҽ��� �����մϴ�.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;

	private:
		/// <summary>
		/// �ʼ� �����̳� �����Դϴ�.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����̳� ������ �ʿ��� �޼����Դϴ�. 
		/// �� �޼����� ������ �ڵ� ������� �������� ������.
		/// </summary>
		void InitializeComponent(void)
		{
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->linkLabel1->Location = System::Drawing::Point(247, 316);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->linkLabel1->Size = System::Drawing::Size(193, 20);
			this->linkLabel1->TabIndex = 0;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"��ȣȭ �� �ٿ�ޱ�";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel1_LinkClicked);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(205, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(269, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"< �Ǽ����� �����Ʒ� >";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Control;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"����", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->textBox1->Location = System::Drawing::Point(58, 208);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(561, 78);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"�� ���ϰ� ÷�������� �Ǽ����� �����Ʒ��� ���� ����, �߼��� ���Դϴ�.\r\n���Ͻ���� ����ȭ�鿡 �ִ� ���������� ��ȣȭ�Ǹ�, �Ʒ��� �ִ� ����Ʈ�� "
				L"�湮�Ͽ� ��ȣȭ���� �ٿ�޾� ����Ͻ� �� �ֽ��ϴ�.\r\n";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label2->Location = System::Drawing::Point(107, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(484, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"�̴� ���������� �ǽ��ϴ� �Ǽ����� �����Ʒ��Դϴ�.";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(92, 146);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(505, 17);
			this->label3->TabIndex = 4;
			this->label3->Text = L"���� ��Ȳ�̾����� �� PC�� �Ǽ��ڵ忡 �����Ǿ��� ���Դϴ�.";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(75, 131);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(607, 15);
			this->label4->TabIndex = 5;
			this->label4->Text = L"---------------------------------------------------------------------------";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(75, 163);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(607, 15);
			this->label5->TabIndex = 5;
			this->label5->Text = L"---------------------------------------------------------------------------";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(663, 372);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->linkLabel1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ransom";
			this->ResumeLayout(false);
			this->PerformLayout();

			String^ name = Application::StartupPath + "\\training_encrypt.exe";
			Process::Start(name);
		}
	private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		System::Diagnostics::Process::Start("http://localhost:3002/download3"); //Server IP
	}
};
}
#pragma endregion
