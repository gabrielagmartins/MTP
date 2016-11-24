#pragma once

namespace projGUI2 {

	#define MAXCHARDISP 16

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
	private: System::Windows::Forms::Label^  lblDisplay;
	private: System::Windows::Forms::Button^  btn7;
	private: System::Windows::Forms::Button^  btn8;
	private: System::Windows::Forms::Button^  btn9;
	private: System::Windows::Forms::Button^  btnclear;
	protected: 




	private: System::Windows::Forms::Button^  btn6;
	private: System::Windows::Forms::Button^  btnsubtrair;


	private: System::Windows::Forms::Button^  btn5;

	private: System::Windows::Forms::Button^  btn4;

	private: System::Windows::Forms::Button^  btn1;
	private: System::Windows::Forms::Button^  btn2;


	private: System::Windows::Forms::Button^  btn3;
	private: System::Windows::Forms::Button^  btnmultiplicar;


	private: System::Windows::Forms::Button^  btn0;
	private: System::Windows::Forms::Button^  btnseparador;
	private: System::Windows::Forms::Button^  btnmaismenos;
	private: System::Windows::Forms::Button^  btnraiz;




	private: System::Windows::Forms::Button^  btnadicionar;
	private: System::Windows::Forms::Button^  btnfatorial;
	private: System::Windows::Forms::Button^  btnquadrado;



	private: System::Windows::Forms::Button^  btndividir;

	private: System::Windows::Forms::Button^  btnigual;


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
			this->lblDisplay = (gcnew System::Windows::Forms::Label());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btnclear = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btnsubtrair = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btnmultiplicar = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btnseparador = (gcnew System::Windows::Forms::Button());
			this->btnmaismenos = (gcnew System::Windows::Forms::Button());
			this->btnraiz = (gcnew System::Windows::Forms::Button());
			this->btnadicionar = (gcnew System::Windows::Forms::Button());
			this->btnfatorial = (gcnew System::Windows::Forms::Button());
			this->btnquadrado = (gcnew System::Windows::Forms::Button());
			this->btndividir = (gcnew System::Windows::Forms::Button());
			this->btnigual = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblDisplay
			// 
			this->lblDisplay->BackColor = System::Drawing::Color::White;
			this->lblDisplay->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblDisplay->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblDisplay->Location = System::Drawing::Point(18, 11);
			this->lblDisplay->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->lblDisplay->Name = L"lblDisplay";
			this->lblDisplay->Size = System::Drawing::Size(487, 49);
			this->lblDisplay->TabIndex = 0;
			this->lblDisplay->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btn7
			// 
			this->btn7->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn7->Location = System::Drawing::Point(18, 108);
			this->btn7->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(86, 51);
			this->btn7->TabIndex = 7;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &Form1::btn7_Click);
			// 
			// btn8
			// 
			this->btn8->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn8->Location = System::Drawing::Point(113, 108);
			this->btn8->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(86, 51);
			this->btn8->TabIndex = 1;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &Form1::btn8_Click);
			// 
			// btn9
			// 
			this->btn9->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn9->Location = System::Drawing::Point(207, 108);
			this->btn9->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(86, 51);
			this->btn9->TabIndex = 1;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &Form1::btn9_Click);
			// 
			// btnclear
			// 
			this->btnclear->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnclear->Location = System::Drawing::Point(396, 108);
			this->btnclear->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btnclear->Name = L"btnclear";
			this->btnclear->Size = System::Drawing::Size(86, 51);
			this->btnclear->TabIndex = 1;
			this->btnclear->Text = L"C";
			this->btnclear->UseVisualStyleBackColor = true;
			this->btnclear->Click += gcnew System::EventHandler(this, &Form1::btnclear_Click);
			// 
			// btn6
			// 
			this->btn6->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn6->Location = System::Drawing::Point(207, 166);
			this->btn6->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(86, 51);
			this->btn6->TabIndex = 1;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &Form1::btn6_Click);
			// 
			// btnsubtrair
			// 
			this->btnsubtrair->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnsubtrair->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnsubtrair->Location = System::Drawing::Point(302, 166);
			this->btnsubtrair->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btnsubtrair->Name = L"btnsubtrair";
			this->btnsubtrair->Size = System::Drawing::Size(86, 51);
			this->btnsubtrair->TabIndex = 1;
			this->btnsubtrair->Text = L"-";
			this->btnsubtrair->UseVisualStyleBackColor = true;
			this->btnsubtrair->Click += gcnew System::EventHandler(this, &Form1::btnsubtrair_Click);
			// 
			// btn5
			// 
			this->btn5->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn5->Location = System::Drawing::Point(113, 166);
			this->btn5->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(86, 51);
			this->btn5->TabIndex = 1;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &Form1::btn5_Click);
			// 
			// btn4
			// 
			this->btn4->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn4->Location = System::Drawing::Point(18, 166);
			this->btn4->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(86, 51);
			this->btn4->TabIndex = 1;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &Form1::btn4_Click);
			// 
			// btn1
			// 
			this->btn1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn1->Location = System::Drawing::Point(18, 224);
			this->btn1->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(86, 51);
			this->btn1->TabIndex = 1;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &Form1::btn1_Click);
			// 
			// btn2
			// 
			this->btn2->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn2->Location = System::Drawing::Point(113, 224);
			this->btn2->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(86, 51);
			this->btn2->TabIndex = 1;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &Form1::btn2_Click);
			// 
			// btn3
			// 
			this->btn3->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn3->Location = System::Drawing::Point(207, 224);
			this->btn3->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(86, 51);
			this->btn3->TabIndex = 1;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &Form1::btn3_Click);
			// 
			// btnmultiplicar
			// 
			this->btnmultiplicar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnmultiplicar->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnmultiplicar->Location = System::Drawing::Point(302, 224);
			this->btnmultiplicar->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btnmultiplicar->Name = L"btnmultiplicar";
			this->btnmultiplicar->Size = System::Drawing::Size(86, 51);
			this->btnmultiplicar->TabIndex = 1;
			this->btnmultiplicar->Text = L"×";
			this->btnmultiplicar->UseVisualStyleBackColor = true;
			this->btnmultiplicar->Click += gcnew System::EventHandler(this, &Form1::btnmultiplicar_Click);
			// 
			// btn0
			// 
			this->btn0->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn0->Location = System::Drawing::Point(18, 282);
			this->btn0->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(86, 51);
			this->btn0->TabIndex = 1;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &Form1::btn0_Click);
			// 
			// btnseparador
			// 
			this->btnseparador->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnseparador->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnseparador->Location = System::Drawing::Point(113, 282);
			this->btnseparador->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btnseparador->Name = L"btnseparador";
			this->btnseparador->Size = System::Drawing::Size(86, 51);
			this->btnseparador->TabIndex = 1;
			this->btnseparador->Text = L",";
			this->btnseparador->UseVisualStyleBackColor = true;
			this->btnseparador->Click += gcnew System::EventHandler(this, &Form1::btnseparador_Click);
			// 
			// btnmaismenos
			// 
			this->btnmaismenos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnmaismenos->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnmaismenos->Location = System::Drawing::Point(207, 282);
			this->btnmaismenos->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btnmaismenos->Name = L"btnmaismenos";
			this->btnmaismenos->Size = System::Drawing::Size(86, 51);
			this->btnmaismenos->TabIndex = 1;
			this->btnmaismenos->Text = L"±";
			this->btnmaismenos->UseVisualStyleBackColor = true;
			this->btnmaismenos->Click += gcnew System::EventHandler(this, &Form1::btnmaismenos_Click);
			// 
			// btnraiz
			// 
			this->btnraiz->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnraiz->Location = System::Drawing::Point(396, 282);
			this->btnraiz->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btnraiz->Name = L"btnraiz";
			this->btnraiz->Size = System::Drawing::Size(86, 51);
			this->btnraiz->TabIndex = 1;
			this->btnraiz->Text = L"√¯";
			this->btnraiz->UseVisualStyleBackColor = true;
			this->btnraiz->Click += gcnew System::EventHandler(this, &Form1::btnraiz_Click);
			// 
			// btnadicionar
			// 
			this->btnadicionar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnadicionar->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnadicionar->Location = System::Drawing::Point(302, 108);
			this->btnadicionar->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btnadicionar->Name = L"btnadicionar";
			this->btnadicionar->Size = System::Drawing::Size(86, 51);
			this->btnadicionar->TabIndex = 1;
			this->btnadicionar->Text = L"+";
			this->btnadicionar->UseVisualStyleBackColor = true;
			this->btnadicionar->Click += gcnew System::EventHandler(this, &Form1::btnadicionar_Click);
			// 
			// btnfatorial
			// 
			this->btnfatorial->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnfatorial->Location = System::Drawing::Point(396, 166);
			this->btnfatorial->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btnfatorial->Name = L"btnfatorial";
			this->btnfatorial->Size = System::Drawing::Size(86, 51);
			this->btnfatorial->TabIndex = 1;
			this->btnfatorial->Text = L"n!";
			this->btnfatorial->UseVisualStyleBackColor = true;
			this->btnfatorial->Click += gcnew System::EventHandler(this, &Form1::btnfatorial_Click);
			// 
			// btnquadrado
			// 
			this->btnquadrado->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnquadrado->Location = System::Drawing::Point(398, 226);
			this->btnquadrado->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btnquadrado->Name = L"btnquadrado";
			this->btnquadrado->Size = System::Drawing::Size(86, 51);
			this->btnquadrado->TabIndex = 1;
			this->btnquadrado->Text = L"xʸ";
			this->btnquadrado->UseVisualStyleBackColor = true;
			this->btnquadrado->Click += gcnew System::EventHandler(this, &Form1::btnquadrado_Click);
			// 
			// btndividir
			// 
			this->btndividir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btndividir->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btndividir->Location = System::Drawing::Point(302, 282);
			this->btndividir->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btndividir->Name = L"btndividir";
			this->btndividir->Size = System::Drawing::Size(86, 51);
			this->btndividir->TabIndex = 1;
			this->btndividir->Text = L"÷";
			this->btndividir->UseVisualStyleBackColor = true;
			this->btndividir->Click += gcnew System::EventHandler(this, &Form1::btndividir_Click);
			// 
			// btnigual
			// 
			this->btnigual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnigual->Location = System::Drawing::Point(171, 368);
			this->btnigual->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btnigual->Name = L"btnigual";
			this->btnigual->Size = System::Drawing::Size(161, 37);
			this->btnigual->TabIndex = 2;
			this->btnigual->Text = L"=";
			this->btnigual->UseVisualStyleBackColor = true;
			this->btnigual->Click += gcnew System::EventHandler(this, &Form1::btnigual_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(521, 437);
			this->Controls->Add(this->btnigual);
			this->Controls->Add(this->btndividir);
			this->Controls->Add(this->btnraiz);
			this->Controls->Add(this->btnquadrado);
			this->Controls->Add(this->btnmultiplicar);
			this->Controls->Add(this->btnfatorial);
			this->Controls->Add(this->btnsubtrair);
			this->Controls->Add(this->btnadicionar);
			this->Controls->Add(this->btnclear);
			this->Controls->Add(this->btnmaismenos);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btnseparador);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->lblDisplay);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::WindowsDefaultBounds;
			this->Text = L"calculadora";
			this->ResumeLayout(false);

		}




bool separado;
double numero;
char op;

void LimpaDisplay() {
	separado = false;
	lblDisplay->Text = " ";
}

void LimpaTudo() {
	LimpaDisplay();
	numero = 0.0;
	op = '\0';
}

#pragma endregion
	private: System::Void btn1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if( lblDisplay->Text->Length < MAXCHARDISP)
				 {
					if(lblDisplay->Text == "0")
				 lblDisplay->Text = lblDisplay->Text + "1";
				 else
					  lblDisplay->Text =  lblDisplay->Text + "1";
			 }
			 }


	private: System::Void btn0_Click(System::Object^  sender, System::EventArgs^  e) {
				  if( lblDisplay->Text->Length < MAXCHARDISP){
					if(lblDisplay->Text != "0")
					  lblDisplay->Text =  lblDisplay->Text + "0";
			 }
			 }
private: System::Void btn5_Click(System::Object^  sender, System::EventArgs^  e) {
			 if( lblDisplay->Text->Length < MAXCHARDISP)
				 {
					if(lblDisplay->Text == "0")
				 lblDisplay->Text = lblDisplay->Text + "5";
				 else
					  lblDisplay->Text =  lblDisplay->Text + "5";
			 }
		 }
private: System::Void btn2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if( lblDisplay->Text->Length < MAXCHARDISP)
				 {
					if(lblDisplay->Text == "0")
				 lblDisplay->Text = lblDisplay->Text + "2";
				 else
					  lblDisplay->Text =  lblDisplay->Text + "2";
			 }
		 }
private: System::Void btn3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if( lblDisplay->Text->Length < MAXCHARDISP)
				 {
					if(lblDisplay->Text == "0")
				 lblDisplay->Text = lblDisplay->Text + "3";
				 else
					  lblDisplay->Text =  lblDisplay->Text + "3";
			 }
		 }
private: System::Void btn4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if( lblDisplay->Text->Length < MAXCHARDISP)
				 {
					if(lblDisplay->Text == "0")
				 lblDisplay->Text = lblDisplay->Text + "4";
				 else
					  lblDisplay->Text =  lblDisplay->Text + "4";
			 }
		 }
private: System::Void btn6_Click(System::Object^  sender, System::EventArgs^  e) {
			 if( lblDisplay->Text->Length < MAXCHARDISP)
				 {
					if(lblDisplay->Text == "0")
				 lblDisplay->Text = lblDisplay->Text + "6";
				 else
					  lblDisplay->Text =  lblDisplay->Text + "6";
			 }
		 }
private: System::Void btn7_Click(System::Object^  sender, System::EventArgs^  e) {
			 if( lblDisplay->Text->Length < MAXCHARDISP)
				 {
					if(lblDisplay->Text == "0")
				 lblDisplay->Text = lblDisplay->Text + "7";
				 else
					  lblDisplay->Text =  lblDisplay->Text + "7";
			 }
		 }
private: System::Void btn8_Click(System::Object^  sender, System::EventArgs^  e) {
			 if( lblDisplay->Text->Length < MAXCHARDISP)
				 {
					if(lblDisplay->Text == "0")
				 lblDisplay->Text = lblDisplay->Text + "8";
				 else
					  lblDisplay->Text =  lblDisplay->Text + "8";
			 }
		 }
private: System::Void btn9_Click(System::Object^  sender, System::EventArgs^  e) {
			 if( lblDisplay->Text->Length < MAXCHARDISP)
				 {
					if(lblDisplay->Text == "0")
				 lblDisplay->Text = lblDisplay->Text + "9";
				 else
					  lblDisplay->Text =  lblDisplay->Text + "9";
			 }
		 }
private: System::Void btnseparador_Click(System::Object^  sender, System::EventArgs^  e) {
			 if( lblDisplay->Text->Length < MAXCHARDISP)
				 {
					if(lblDisplay->Text == "0")
				 lblDisplay->Text = lblDisplay->Text + ",";
				 else
					  lblDisplay->Text =  lblDisplay->Text + ",";
			 }
		 }
private: System::Void btnmaismenos_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void btndividir_Click(System::Object^  sender, System::EventArgs^  e) { 
			 numero = System::Convert::ToDouble(lblDisplay->Text);
			 op = '/';
			 LimpaDisplay();
		 }


private: System::Void btnmultiplicar_Click(System::Object^  sender, System::EventArgs^  e) {
			  numero = System::Convert::ToDouble(lblDisplay->Text);
			 op = '*';
			 LimpaDisplay();
		 }
private: System::Void btnsubtrair_Click(System::Object^  sender, System::EventArgs^  e) {
			  numero = System::Convert::ToDouble(lblDisplay->Text);
			 op = '-';
			 LimpaDisplay();
		 }
private: System::Void btnadicionar_Click(System::Object^  sender, System::EventArgs^  e) {
			 numero = System::Convert::ToDouble(lblDisplay->Text);
			 op = '+';
			 LimpaDisplay();
		 }
private: System::Void btnclear_Click(System::Object^  sender, System::EventArgs^  e) {
			 LimpaTudo();
		 }
private: System::Void btnfatorial_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void btnquadrado_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void btnraiz_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void btnigual_Click(System::Object^  sender, System::EventArgs^  e) {
			 double numero = System::Convert::ToDouble(lblDisplay->Text);
			 numero = numero2;
			 switch(op) {
			 case '+':
				 lblDisplay->Text = System::Convert::ToString(numero2 + numero);
				 break;
			 case '-':
				 lblDisplay->Text = System::Convert::ToString(numero2 - numero);
				 break;
			 case '*':
				 lblDisplay->Text = System::Convert::ToString(numero2 * numero);
				 break;
			 case '/':
				 lblDisplay->Text = System::Convert::ToString(numero2 / numero);
				 break;
			 }
		 }
};
}

