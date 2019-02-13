#pragma once

namespace shi12bAssignment1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// shi12bStart 摘要
	/// </summary>
	public ref class shi12bStart : public System::Windows::Forms::Form
	{
	public:shi12bStart(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~shi12bStart()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  radioButton10;
	private: System::Windows::Forms::RadioButton^  radioButton9;
	private: System::Windows::Forms::RadioButton^  radioButton8;
	private: System::Windows::Forms::RadioButton^  radioButton7;
	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	protected:

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(shi12bStart::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton4);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(23, 182);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(228, 216);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(28, 149);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(41, 16);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Div";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &shi12bStart::radioButton4_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(28, 114);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(41, 16);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Mul";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &shi12bStart::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(28, 78);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(41, 16);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Sub";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &shi12bStart::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(28, 39);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(41, 16);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Add";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &shi12bStart::radioButton1_CheckedChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton10);
			this->groupBox2->Controls->Add(this->radioButton9);
			this->groupBox2->Controls->Add(this->radioButton8);
			this->groupBox2->Controls->Add(this->radioButton7);
			this->groupBox2->Controls->Add(this->radioButton6);
			this->groupBox2->Controls->Add(this->radioButton5);
			this->groupBox2->Location = System::Drawing::Point(266, 180);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(260, 314);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"groupBox2";
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->Location = System::Drawing::Point(51, 221);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(83, 16);
			this->radioButton10->TabIndex = 5;
			this->radioButton10->TabStop = true;
			this->radioButton10->Text = L"Less Equal";
			this->radioButton10->UseVisualStyleBackColor = true;
			this->radioButton10->CheckedChanged += gcnew System::EventHandler(this, &shi12bStart::radioButton10_CheckedChanged);
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Location = System::Drawing::Point(51, 186);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(77, 16);
			this->radioButton9->TabIndex = 4;
			this->radioButton9->TabStop = true;
			this->radioButton9->Text = L"Less Than";
			this->radioButton9->UseVisualStyleBackColor = true;
			this->radioButton9->CheckedChanged += gcnew System::EventHandler(this, &shi12bStart::radioButton9_CheckedChanged);
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(51, 151);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(101, 16);
			this->radioButton8->TabIndex = 3;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"Greater Equal";
			this->radioButton8->UseVisualStyleBackColor = true;
			this->radioButton8->CheckedChanged += gcnew System::EventHandler(this, &shi12bStart::radioButton8_CheckedChanged);
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(51, 116);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(95, 16);
			this->radioButton7->TabIndex = 2;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"Greater Than";
			this->radioButton7->UseVisualStyleBackColor = true;
			this->radioButton7->CheckedChanged += gcnew System::EventHandler(this, &shi12bStart::radioButton7_CheckedChanged);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(51, 80);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(77, 16);
			this->radioButton6->TabIndex = 1;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"Not Equal";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &shi12bStart::radioButton6_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(51, 41);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(53, 16);
			this->radioButton5->TabIndex = 0;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Equal";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &shi12bStart::radioButton5_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(31, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 12);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Variable 1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(31, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 12);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Variable 2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(31, 132);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(11, 12);
			this->label3->TabIndex = 4;
			this->label3->Text = L"0";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(117, 33);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(112, 21);
			this->textBox1->TabIndex = 5;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &shi12bStart::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(117, 82);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(112, 21);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"0";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(63, 416);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(129, 77);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(278, 33);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(226, 129);
			this->pictureBox2->TabIndex = 8;
			this->pictureBox2->TabStop = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->exitToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(550, 25);
			this->menuStrip1->TabIndex = 9;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(40, 21);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &shi12bStart::exitToolStripMenuItem_Click);
			// 
			// shi12bStart
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(550, 517);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"shi12bStart";
			this->Text = L"shi12bAssignment1Solution";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		int val1;
		int val2;
#pragma endregion

	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		
	}
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (hasChar(textBox1->Text) || hasChar(textBox2->Text)) {
		label3->Text = textBox1->Text + textBox2->Text;
		pictureBox1->Image = Image::FromFile("empty.jpg");
	}
	else {
		label3->Text = Convert::ToString(Convert::ToInt32(textBox1->Text) + Convert::ToInt32(textBox2->Text));
		pictureBox1->Image = Image::FromFile("empty.jpg");
	}
}
		 private: bool hasChar(System::String^ in) {
			 int i;
			 for (i = 0; i < in->Length; i++) {
				 if (in[i] < '0' || in[i] > '9') return true;
			 }
			 return false;
	}
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (hasChar(textBox1->Text) || hasChar(textBox2->Text)) {
		label3->Text = "Incompatible order";
		pictureBox1->Image = Image::FromFile("na.jpg");
	}
	else {
		label3->Text = Convert::ToString(Convert::ToInt32(textBox1->Text) - Convert::ToInt32(textBox2->Text));
		pictureBox1->Image = Image::FromFile("empty.jpg");
	}
}
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (hasChar(textBox1->Text) || hasChar(textBox2->Text)) {
		label3->Text = "Incompatible order";
		pictureBox1->Image = Image::FromFile("na.jpg");
	}
	else {
		label3->Text = Convert::ToString(Convert::ToInt32(textBox1->Text) * Convert::ToInt32(textBox2->Text));
		pictureBox1->Image = Image::FromFile("empty.jpg");
	}
}
private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (hasChar(textBox1->Text) || hasChar(textBox2->Text)) {
		label3->Text = "Incompatible order";
		pictureBox1->Image = Image::FromFile("na.jpg");
	}
	else {
		if (Convert::ToInt32(textBox2->Text) != 0) {
			label3->Text = Convert::ToString(Convert::ToInt32(textBox1->Text) / Convert::ToInt32(textBox2->Text));
			pictureBox1->Image = Image::FromFile("empty.jpg");
		}
		else {
			label3->Text = "second variable cannot be 0";
			pictureBox1->Image = Image::FromFile("na.jpg");
		}
	}
}
private: System::Void radioButton5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (hasChar(textBox1->Text) || hasChar(textBox2->Text)) {
		if (textBox1->Text == textBox2->Text) pictureBox2->Image = Image::FromFile("tick.jpg");
		else pictureBox2->Image = Image::FromFile("cross.jpg");
	}
	else {
		if (Convert::ToInt32(textBox1->Text) == Convert::ToInt32(textBox2->Text)) pictureBox2->Image = Image::FromFile("tick.jpg");
		else pictureBox2->Image = Image::FromFile("cross.jpg");
	}
}
private: System::Void radioButton6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (hasChar(textBox1->Text) || hasChar(textBox2->Text)) {
		if (textBox1->Text != textBox2->Text) pictureBox2->Image = Image::FromFile("tick.jpg");
		else pictureBox2->Image = Image::FromFile("cross.jpg");
	}
	else {
		if (Convert::ToInt32(textBox1->Text) != Convert::ToInt32(textBox2->Text)) pictureBox2->Image = Image::FromFile("tick.jpg");
		else pictureBox2->Image = Image::FromFile("cross.jpg");
	}
}
private: System::Void radioButton7_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (hasChar(textBox1->Text) || hasChar(textBox2->Text)) {
		if (System::String::Compare(textBox1->Text,textBox2->Text) > 0) pictureBox2->Image = Image::FromFile("tick.jpg");
		else pictureBox2->Image = Image::FromFile("cross.jpg");
	}
	else {
		if (Convert::ToInt32(textBox1->Text) > Convert::ToInt32(textBox2->Text)) pictureBox2->Image = Image::FromFile("tick.jpg");
		else pictureBox2->Image = Image::FromFile("cross.jpg");
	}
}
private: System::Void radioButton8_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (hasChar(textBox1->Text) || hasChar(textBox2->Text)) {
		if (System::String::Compare(textBox1->Text, textBox2->Text) >= 0) pictureBox2->Image = Image::FromFile("tick.jpg");
		else pictureBox2->Image = Image::FromFile("cross.jpg");
	}
	else {
		if (Convert::ToInt32(textBox1->Text) >= Convert::ToInt32(textBox2->Text)) pictureBox2->Image = Image::FromFile("tick.jpg");
		else pictureBox2->Image = Image::FromFile("cross.jpg");
	}
}
private: System::Void radioButton9_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (hasChar(textBox1->Text) || hasChar(textBox2->Text)) {
		if (System::String::Compare(textBox1->Text, textBox2->Text) < 0) pictureBox2->Image = Image::FromFile("tick.jpg");
		else pictureBox2->Image = Image::FromFile("cross.jpg");
	}
	else {
		if (Convert::ToInt32(textBox1->Text) < Convert::ToInt32(textBox2->Text)) pictureBox2->Image = Image::FromFile("tick.jpg");
		else pictureBox2->Image = Image::FromFile("cross.jpg");
	}
}
private: System::Void radioButton10_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (hasChar(textBox1->Text) || hasChar(textBox2->Text)) {
		if (System::String::Compare(textBox1->Text, textBox2->Text) <= 0) pictureBox2->Image = Image::FromFile("tick.jpg");
		else pictureBox2->Image = Image::FromFile("cross.jpg");
	}
	else {
		if (Convert::ToInt32(textBox1->Text) <= Convert::ToInt32(textBox2->Text)) pictureBox2->Image = Image::FromFile("tick.jpg");
		else pictureBox2->Image = Image::FromFile("cross.jpg");
	}
}
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
};
}
