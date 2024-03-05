#pragma once

namespace FirstCLRProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lable_result;
	protected:

	protected:
	private: System::Windows::Forms::Button^  button_exit;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button_multiply;

	private: System::Windows::Forms::Button^  button_minus;
	private: System::Windows::Forms::Button^  button6;







	private: System::Windows::Forms::Button^  button5;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button_plus;
	private: System::Windows::Forms::Button^  button9;



	private: System::Windows::Forms::Button^  button8;

	private: System::Windows::Forms::Button^  button7;

	private: System::Windows::Forms::Button^  button_result;
	private: System::Windows::Forms::Button^  button_dot;


	private: System::Windows::Forms::Button^  button0;
	private: System::Windows::Forms::Button^  button_divide;


	private: System::Windows::Forms::Button^  button_percent;


	private: System::Windows::Forms::Button^  button_pdm;

	private: System::Windows::Forms::Button^  button_ac;

	//ѕеременные дл€ обработки вычислений
	private: float first_num;
	private: char user_action = ' ';
	private: bool is_equal = false;


	protected:




	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->lable_result = (gcnew System::Windows::Forms::Label());
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button_multiply = (gcnew System::Windows::Forms::Button());
			this->button_minus = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button_plus = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button_result = (gcnew System::Windows::Forms::Button());
			this->button_dot = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->button_divide = (gcnew System::Windows::Forms::Button());
			this->button_percent = (gcnew System::Windows::Forms::Button());
			this->button_pdm = (gcnew System::Windows::Forms::Button());
			this->button_ac = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lable_result
			// 
			this->lable_result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lable_result->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lable_result->Location = System::Drawing::Point(199, 94);
			this->lable_result->Name = L"lable_result";
			this->lable_result->Size = System::Drawing::Size(143, 30);
			this->lable_result->TabIndex = 0;
			this->lable_result->Text = L"0";
			this->lable_result->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::SystemColors::Highlight;
			this->button_exit->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button_exit->Location = System::Drawing::Point(274, 12);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(75, 23);
			this->button_exit->TabIndex = 1;
			this->button_exit->Text = L"X";
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &MyForm::button_exit_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Highlight;
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(199, 204);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(31, 27);
			this->button1->TabIndex = 2;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Highlight;
			this->button2->Location = System::Drawing::Point(236, 204);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(31, 27);
			this->button2->TabIndex = 3;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::Highlight;
			this->button3->Location = System::Drawing::Point(274, 204);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(31, 27);
			this->button3->TabIndex = 4;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button_multiply
			// 
			this->button_multiply->BackColor = System::Drawing::Color::MediumBlue;
			this->button_multiply->Location = System::Drawing::Point(311, 204);
			this->button_multiply->Name = L"button_multiply";
			this->button_multiply->Size = System::Drawing::Size(31, 27);
			this->button_multiply->TabIndex = 5;
			this->button_multiply->Text = L"x";
			this->button_multiply->UseVisualStyleBackColor = false;
			this->button_multiply->Click += gcnew System::EventHandler(this, &MyForm::button_multiply_Click);
			// 
			// button_minus
			// 
			this->button_minus->BackColor = System::Drawing::Color::MediumBlue;
			this->button_minus->Location = System::Drawing::Point(311, 246);
			this->button_minus->Name = L"button_minus";
			this->button_minus->Size = System::Drawing::Size(31, 27);
			this->button_minus->TabIndex = 9;
			this->button_minus->Text = L"-";
			this->button_minus->UseVisualStyleBackColor = false;
			this->button_minus->Click += gcnew System::EventHandler(this, &MyForm::button_minus_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::Highlight;
			this->button6->Location = System::Drawing::Point(274, 246);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(31, 27);
			this->button6->TabIndex = 8;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::Highlight;
			this->button5->Location = System::Drawing::Point(236, 246);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(31, 27);
			this->button5->TabIndex = 7;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::Highlight;
			this->button4->Location = System::Drawing::Point(199, 246);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(31, 27);
			this->button4->TabIndex = 6;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button_plus
			// 
			this->button_plus->BackColor = System::Drawing::Color::MediumBlue;
			this->button_plus->Location = System::Drawing::Point(311, 288);
			this->button_plus->Name = L"button_plus";
			this->button_plus->Size = System::Drawing::Size(31, 27);
			this->button_plus->TabIndex = 13;
			this->button_plus->Text = L"+";
			this->button_plus->UseVisualStyleBackColor = false;
			this->button_plus->Click += gcnew System::EventHandler(this, &MyForm::button_plus_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::Highlight;
			this->button9->Location = System::Drawing::Point(274, 288);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(31, 27);
			this->button9->TabIndex = 12;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::Highlight;
			this->button8->Location = System::Drawing::Point(236, 288);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(31, 27);
			this->button8->TabIndex = 11;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::Highlight;
			this->button7->Location = System::Drawing::Point(199, 288);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(31, 27);
			this->button7->TabIndex = 10;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button_result
			// 
			this->button_result->BackColor = System::Drawing::Color::Blue;
			this->button_result->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_result->Location = System::Drawing::Point(273, 333);
			this->button_result->Name = L"button_result";
			this->button_result->Size = System::Drawing::Size(69, 27);
			this->button_result->TabIndex = 17;
			this->button_result->Text = L"=";
			this->button_result->UseVisualStyleBackColor = false;
			this->button_result->Click += gcnew System::EventHandler(this, &MyForm::button_result_Click);
			// 
			// button_dot
			// 
			this->button_dot->BackColor = System::Drawing::SystemColors::Highlight;
			this->button_dot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_dot->Location = System::Drawing::Point(199, 333);
			this->button_dot->Name = L"button_dot";
			this->button_dot->Size = System::Drawing::Size(31, 27);
			this->button_dot->TabIndex = 16;
			this->button_dot->Text = L".";
			this->button_dot->UseVisualStyleBackColor = false;
			this->button_dot->Click += gcnew System::EventHandler(this, &MyForm::button_dot_Click);
			// 
			// button0
			// 
			this->button0->BackColor = System::Drawing::SystemColors::Highlight;
			this->button0->Location = System::Drawing::Point(236, 333);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(31, 27);
			this->button0->TabIndex = 15;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = false;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button_divide
			// 
			this->button_divide->BackColor = System::Drawing::Color::MediumBlue;
			this->button_divide->Location = System::Drawing::Point(311, 161);
			this->button_divide->Name = L"button_divide";
			this->button_divide->Size = System::Drawing::Size(31, 27);
			this->button_divide->TabIndex = 21;
			this->button_divide->Text = L"/";
			this->button_divide->UseVisualStyleBackColor = false;
			this->button_divide->Click += gcnew System::EventHandler(this, &MyForm::button_divide_Click);
			// 
			// button_percent
			// 
			this->button_percent->BackColor = System::Drawing::SystemColors::Desktop;
			this->button_percent->Location = System::Drawing::Point(274, 161);
			this->button_percent->Name = L"button_percent";
			this->button_percent->Size = System::Drawing::Size(31, 27);
			this->button_percent->TabIndex = 20;
			this->button_percent->Text = L"%";
			this->button_percent->UseVisualStyleBackColor = false;
			this->button_percent->Click += gcnew System::EventHandler(this, &MyForm::button_percent_Click);
			// 
			// button_pdm
			// 
			this->button_pdm->BackColor = System::Drawing::SystemColors::Desktop;
			this->button_pdm->Location = System::Drawing::Point(236, 161);
			this->button_pdm->Name = L"button_pdm";
			this->button_pdm->Size = System::Drawing::Size(31, 27);
			this->button_pdm->TabIndex = 19;
			this->button_pdm->Text = L"+/-";
			this->button_pdm->UseVisualStyleBackColor = false;
			this->button_pdm->Click += gcnew System::EventHandler(this, &MyForm::button_pdm_Click);
			// 
			// button_ac
			// 
			this->button_ac->BackColor = System::Drawing::SystemColors::Desktop;
			this->button_ac->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_ac->Location = System::Drawing::Point(199, 161);
			this->button_ac->Name = L"button_ac";
			this->button_ac->Size = System::Drawing::Size(31, 27);
			this->button_ac->TabIndex = 18;
			this->button_ac->Text = L"AC";
			this->button_ac->UseVisualStyleBackColor = false;
			this->button_ac->Click += gcnew System::EventHandler(this, &MyForm::button_ac_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(361, 513);
			this->Controls->Add(this->button_divide);
			this->Controls->Add(this->button_percent);
			this->Controls->Add(this->button_pdm);
			this->Controls->Add(this->button_ac);
			this->Controls->Add(this->button_result);
			this->Controls->Add(this->button_dot);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->button_plus);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button_minus);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button_multiply);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->lable_result);
			this->ForeColor = System::Drawing::SystemColors::Control;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->ResumeLayout(false);

		}

	
	private: System::Void button_exit_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}

	private: System::Void BtnNumber_Click(System::Object^ sender, System::EventArgs^ e) {
		this->lable_result->ForeColor = Color::Black;
		Button^ button = safe_cast<Button^>(sender);

		if (this->lable_result->Text == "0" || is_equal) {
			this->lable_result->Text = button->Text;
			is_equal = false;
		}
		else
			this->lable_result->Text = this->lable_result->Text + button->Text;		
	}
	
	private: System::Void math_action(char action) {
		this->first_num = System::Convert::ToDouble(this->lable_result->Text);
		this->user_action = action;
		this->lable_result->Text = " ";
	}

	private: System::Void button_divide_Click(System::Object^  sender, System::EventArgs^  e) {
		math_action('/');
	}
	
	private: System::Void button_multiply_Click(System::Object^  sender, System::EventArgs^  e) {
		math_action('*');
	}
	
	private: System::Void button_minus_Click(System::Object^  sender, System::EventArgs^  e) {
		math_action('-');
	}
	
	private: System::Void button_plus_Click(System::Object^  sender, System::EventArgs^  e) {
		math_action('+');
	}
	private: System::Void button_result_Click(System::Object^  sender, System::EventArgs^  e) {
		// фикс нажати€ на равно при 1-м введенном числе
		if (user_action == ' ')
			return;
		float second = System::Convert::ToDouble(this->lable_result->Text);
		switch (this->user_action)
		{
		case '/':
			if (second == 0) {
				lable_result->Text = "0";
				this->lable_result->ForeColor = Color::Red;
				MessageBox::Show(this, "ƒеление на 0 запрещено", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
			this->first_num / second;
			lable_result->Text = System::Convert::ToString(first_num / second);
			}
			break;	
		case '*':
			this->first_num * second;
			lable_result->Text = System::Convert::ToString(first_num * second);
			break;
		case '-':
			this->first_num - second;
			lable_result->Text = System::Convert::ToString(first_num - second);
			break;
		case '+':
			this->first_num + second;
			lable_result->Text = System::Convert::ToString(first_num + second);
			break;
		case '%':
			this->first_num * second / 100;
			lable_result->Text = System::Convert::ToString(first_num * second / 100);
			break;
		default:
			break;
		}
		this->is_equal = true;
	}

	
	private: System::Void button_ac_Click(System::Object^  sender, System::EventArgs^  e) {
		this->lable_result->Text = "0";
		this->lable_result->ForeColor = Color::White;
		this->first_num = 0;
		this->user_action = ' ';
		this->is_equal = false;
	}

	private: System::Void button_pdm_Click(System::Object^  sender, System::EventArgs^  e) {		
		this->lable_result->Text = System::Convert::ToString(System::Convert::ToDouble(this->lable_result->Text) * (-1));
	}
	
	private: System::Void button_percent_Click(System::Object^  sender, System::EventArgs^  e) {
		math_action('%');
	}

	private: System::Void button_dot_Click(System::Object^  sender, System::EventArgs^  e) {
		if(!this->lable_result->Text->Contains(","))
		this->lable_result->Text = this->lable_result->Text + ",";
	}
};
}
