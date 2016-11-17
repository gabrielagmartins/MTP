#pragma once

namespace projGUI1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lbl1;
	protected: 

	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::CheckBox^  chk1;
	private: System::Windows::Forms::TextBox^  txtEntrada;


	private: System::Windows::Forms::ComboBox^  doces;

	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  option2;



	private: System::Windows::Forms::RadioButton^  option1;

	private: System::Windows::Forms::CheckBox^  chk2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->chk1 = (gcnew System::Windows::Forms::CheckBox());
			this->txtEntrada = (gcnew System::Windows::Forms::TextBox());
			this->doces = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->option2 = (gcnew System::Windows::Forms::RadioButton());
			this->option1 = (gcnew System::Windows::Forms::RadioButton());
			this->chk2 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Location = System::Drawing::Point(12, 9);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(27, 13);
			this->lbl1->TabIndex = 0;
			this->lbl1->Text = L"gabi";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(59, 240);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// chk1
			// 
			this->chk1->AutoSize = true;
			this->chk1->Location = System::Drawing::Point(15, 52);
			this->chk1->Name = L"chk1";
			this->chk1->Size = System::Drawing::Size(96, 17);
			this->chk1->TabIndex = 2;
			this->chk1->Text = L"selecionar item";
			this->chk1->UseVisualStyleBackColor = true;
			// 
			// txtEntrada
			// 
			this->txtEntrada->Location = System::Drawing::Point(12, 97);
			this->txtEntrada->Name = L"txtEntrada";
			this->txtEntrada->Size = System::Drawing::Size(100, 20);
			this->txtEntrada->TabIndex = 4;
			// 
			// doces
			// 
			this->doces->FormattingEnabled = true;
			this->doces->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"brigadeiro", L"beijinho", L"leite ninho", L"nutella", 
				L"goiabada", L"kit kat"});
			this->doces->Location = System::Drawing::Point(12, 25);
			this->doces->Name = L"doces";
			this->doces->Size = System::Drawing::Size(121, 21);
			this->doces->TabIndex = 6;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(180, 35);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(185, 257);
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Form1::pictureBox2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->option2);
			this->groupBox1->Controls->Add(this->option1);
			this->groupBox1->Location = System::Drawing::Point(8, 123);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(126, 99);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"selecione uma opção";
			// 
			// option2
			// 
			this->option2->AutoSize = true;
			this->option2->Location = System::Drawing::Point(6, 42);
			this->option2->Name = L"option2";
			this->option2->Size = System::Drawing::Size(75, 17);
			this->option2->TabIndex = 1;
			this->option2->Text = L"batata frita";
			this->option2->UseVisualStyleBackColor = true;
			this->option2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			// 
			// option1
			// 
			this->option1->AutoSize = true;
			this->option1->Location = System::Drawing::Point(6, 19);
			this->option1->Name = L"option1";
			this->option1->Size = System::Drawing::Size(49, 17);
			this->option1->TabIndex = 0;
			this->option1->Text = L"pizza";
			this->option1->UseVisualStyleBackColor = true;
			// 
			// chk2
			// 
			this->chk2->AutoSize = true;
			this->chk2->Location = System::Drawing::Point(15, 74);
			this->chk2->Name = L"chk2";
			this->chk2->Size = System::Drawing::Size(103, 17);
			this->chk2->TabIndex = 9;
			this->chk2->Text = L"selecionar nome";
			this->chk2->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(424, 304);
			this->Controls->Add(this->chk2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->doces);
			this->Controls->Add(this->txtEntrada);
			this->Controls->Add(this->chk1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lbl1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
      lbl1 -> Text = "";
	  if(chk1 ->Checked)
		  lbl1->Text = lbl1->Text + "stf, ";
	  if(chk2 ->Checked)
		  lbl1->Text = lbl1->Text + "coxinha, ";
	  lbl1->Text = lbl1->Text + "doces: " +
System::Convert::ToString(doces->SelectedItem) + ", ";
	  lbl1->Text = lbl1->Text + txtEntrada->Text;
	  if(option1->Checked)
		  lbl1->ForeColor = System::Drawing::Color::Blue;
	  if(option2->Checked)
		  lbl1->ForeColor = System::Drawing::Color::Red;

	 }
		 //doces->SelectedIndex =
};
}

