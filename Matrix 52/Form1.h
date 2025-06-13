#include <fstream>
using namespace std;
#pragma once
#define size 100
namespace Matrix52{
	//Матрица
	double A[size][size];
	//Вектор перестановок
	int B[size];
	//Дополнительные вектора
	double C[size],D[size];
	//Порядок матрицы
	int N;
	double DET;
	int COUNT;
#pragma region Microsoft
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text;
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
		}
	protected:
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ _tab_main;
	private: System::Windows::Forms::TabPage^ _tab_solve;
	private: System::Windows::Forms::TabPage^ _tab_tables;
	private: System::Windows::Forms::TabPage^ _tab_charts;
	private: System::Windows::Forms::Label^ _text_type;
	private: System::Windows::Forms::NumericUpDown^ _type;
	private: System::Windows::Forms::Button^ _solve;
	private: System::Windows::Forms::Label^ _text_rank;
	private: System::Windows::Forms::NumericUpDown^ _rank;
	private: System::Windows::Forms::GroupBox^ _group_matrixes;
	private: System::Windows::Forms::Button^ _accept;
	private: System::Windows::Forms::RichTextBox^ _matrix_input;
	private: System::Windows::Forms::Label^ _text_inputing_matrix;
	private: System::Windows::Forms::Label^ _text_outputing_matrix;
	private: System::Windows::Forms::RichTextBox^ _matrix_output;
	private: System::Windows::Forms::NumericUpDown^ _value;
	private: System::Windows::Forms::Button^ _clear;
	private: System::Windows::Forms::Label^ _text_det;
	private: System::Windows::Forms::Label^ _det;
	private: System::Windows::Forms::RichTextBox^ _line_1;
	private: System::Windows::Forms::RichTextBox^ _line_2;
	private: System::Windows::Forms::Button^ _example_2;
	private: System::Windows::Forms::Button^ _example_1;
	private: System::Windows::Forms::Button^ _create;
	private: System::Windows::Forms::TabControl^ _tab_table;
	private: System::Windows::Forms::TabPage^ _tab_table_1;
	private: System::Windows::Forms::TabPage^ _tab_table_2;
	private: System::Windows::Forms::TabPage^ _tab_table_3;
	private: System::Windows::Forms::Label^ _table_1e;
	private: System::Windows::Forms::Label^ _table_1d;
	private: System::Windows::Forms::Label^ _table_1c;
	private: System::Windows::Forms::Label^ _table_1b;
	private: System::Windows::Forms::Label^ _table_1a;
	private: System::Windows::Forms::Label^ _table_2e;
	private: System::Windows::Forms::Label^ _table_2d;
	private: System::Windows::Forms::Label^ _table_2c;
	private: System::Windows::Forms::Label^ _table_2b;
	private: System::Windows::Forms::Label^ _table_2a;
	private: System::Windows::Forms::Label^ _table_3g;
	private: System::Windows::Forms::Label^ _table_3f;
	private: System::Windows::Forms::Label^ _table_3e;
	private: System::Windows::Forms::Label^ _table_3d;
	private: System::Windows::Forms::Label^ _table_3c;
	private: System::Windows::Forms::Label^ _table_3b;
	private: System::Windows::Forms::Label^ _table_3a;
	private: System::Windows::Forms::Label^ _table_3h;
	private: System::Windows::Forms::NumericUpDown^ _attribute;
	private: System::Windows::Forms::NumericUpDown^ _number;
	private: System::Windows::Forms::Button^ _example_3;
	private: System::Windows::Forms::PictureBox^ _field;
	private: System::Windows::Forms::Label^ _description;
	private: System::Windows::Forms::NumericUpDown^ _n;
	private: System::Windows::Forms::Button^ _build;
	private: System::Windows::Forms::Label^ _max_value;
	private: System::Windows::Forms::Label^ _text_color_3;
	private: System::Windows::Forms::PictureBox^ _color_3;
	private: System::Windows::Forms::Label^ _text_color_2;
	private: System::Windows::Forms::PictureBox^ _color_2;
	private: System::Windows::Forms::Label^ _text_color_1;
	private: System::Windows::Forms::PictureBox^ _color_1;
	private: System::Windows::Forms::GroupBox^ _group_methods_LU;
	private: System::Windows::Forms::RadioButton^ _methods_LU_1;
	private: System::Windows::Forms::RadioButton^ _methods_LU_2;
	private: System::Windows::Forms::GroupBox^ _group_methods_reverse;
	private: System::Windows::Forms::RadioButton^ _methods_reverse_1;
	private: System::Windows::Forms::RadioButton^ _methods_reverse_2;
	private: System::Windows::Forms::CheckBox^  _auto_build;
	private: System::Windows::Forms::CheckBox^  _create_table_3;
	private: System::Windows::Forms::CheckBox^  _create_table_2;
	private: System::Windows::Forms::CheckBox^  _create_table_1;
	private: System::Windows::Forms::MenuStrip^  _menu;
	private: System::Windows::Forms::ToolStripMenuItem^  _menu_main;
	private: System::Windows::Forms::ToolStripMenuItem^  _menu_detail_out;
	private: System::Windows::Forms::ToolStripMenuItem^  _menu_detail_in;
	private: System::Windows::Forms::ToolStripMenuItem^  _about;
	private: System::Windows::Forms::ProgressBar^  _progress;
	private: System::Windows::Forms::Label^  _text_progress;
	private: System::Windows::Forms::CheckBox^  _auto_clear;
	private: System::Windows::Forms::Label^  _time_progress;
	private: System::ComponentModel::IContainer^ components;
#pragma region Windows Form Designer generated code
				void InitializeComponent(void)
				{
					this->_tab_main = (gcnew System::Windows::Forms::TabControl());
					this->_tab_solve = (gcnew System::Windows::Forms::TabPage());
					this->_time_progress = (gcnew System::Windows::Forms::Label());
					this->_auto_clear = (gcnew System::Windows::Forms::CheckBox());
					this->_text_progress = (gcnew System::Windows::Forms::Label());
					this->_progress = (gcnew System::Windows::Forms::ProgressBar());
					this->_matrix_output = (gcnew System::Windows::Forms::RichTextBox());
					this->_matrix_input = (gcnew System::Windows::Forms::RichTextBox());
					this->_group_methods_reverse = (gcnew System::Windows::Forms::GroupBox());
					this->_methods_reverse_1 = (gcnew System::Windows::Forms::RadioButton());
					this->_methods_reverse_2 = (gcnew System::Windows::Forms::RadioButton());
					this->_group_methods_LU = (gcnew System::Windows::Forms::GroupBox());
					this->_methods_LU_1 = (gcnew System::Windows::Forms::RadioButton());
					this->_methods_LU_2 = (gcnew System::Windows::Forms::RadioButton());
					this->_example_3 = (gcnew System::Windows::Forms::Button());
					this->_example_2 = (gcnew System::Windows::Forms::Button());
					this->_example_1 = (gcnew System::Windows::Forms::Button());
					this->_line_2 = (gcnew System::Windows::Forms::RichTextBox());
					this->_line_1 = (gcnew System::Windows::Forms::RichTextBox());
					this->_det = (gcnew System::Windows::Forms::Label());
					this->_text_det = (gcnew System::Windows::Forms::Label());
					this->_clear = (gcnew System::Windows::Forms::Button());
					this->_text_outputing_matrix = (gcnew System::Windows::Forms::Label());
					this->_text_inputing_matrix = (gcnew System::Windows::Forms::Label());
					this->_group_matrixes = (gcnew System::Windows::Forms::GroupBox());
					this->_value = (gcnew System::Windows::Forms::NumericUpDown());
					this->_accept = (gcnew System::Windows::Forms::Button());
					this->_text_rank = (gcnew System::Windows::Forms::Label());
					this->_rank = (gcnew System::Windows::Forms::NumericUpDown());
					this->_text_type = (gcnew System::Windows::Forms::Label());
					this->_type = (gcnew System::Windows::Forms::NumericUpDown());
					this->_solve = (gcnew System::Windows::Forms::Button());
					this->_tab_tables = (gcnew System::Windows::Forms::TabPage());
					this->_tab_table = (gcnew System::Windows::Forms::TabControl());
					this->_tab_table_1 = (gcnew System::Windows::Forms::TabPage());
					this->_table_1e = (gcnew System::Windows::Forms::Label());
					this->_table_1d = (gcnew System::Windows::Forms::Label());
					this->_table_1c = (gcnew System::Windows::Forms::Label());
					this->_table_1b = (gcnew System::Windows::Forms::Label());
					this->_table_1a = (gcnew System::Windows::Forms::Label());
					this->_tab_table_2 = (gcnew System::Windows::Forms::TabPage());
					this->_table_2e = (gcnew System::Windows::Forms::Label());
					this->_table_2d = (gcnew System::Windows::Forms::Label());
					this->_table_2c = (gcnew System::Windows::Forms::Label());
					this->_table_2b = (gcnew System::Windows::Forms::Label());
					this->_table_2a = (gcnew System::Windows::Forms::Label());
					this->_tab_table_3 = (gcnew System::Windows::Forms::TabPage());
					this->_table_3d = (gcnew System::Windows::Forms::Label());
					this->_table_3h = (gcnew System::Windows::Forms::Label());
					this->_table_3g = (gcnew System::Windows::Forms::Label());
					this->_table_3f = (gcnew System::Windows::Forms::Label());
					this->_table_3e = (gcnew System::Windows::Forms::Label());
					this->_table_3c = (gcnew System::Windows::Forms::Label());
					this->_table_3b = (gcnew System::Windows::Forms::Label());
					this->_table_3a = (gcnew System::Windows::Forms::Label());
					this->_create_table_3 = (gcnew System::Windows::Forms::CheckBox());
					this->_create_table_2 = (gcnew System::Windows::Forms::CheckBox());
					this->_create_table_1 = (gcnew System::Windows::Forms::CheckBox());
					this->_attribute = (gcnew System::Windows::Forms::NumericUpDown());
					this->_number = (gcnew System::Windows::Forms::NumericUpDown());
					this->_create = (gcnew System::Windows::Forms::Button());
					this->_tab_charts = (gcnew System::Windows::Forms::TabPage());
					this->_build = (gcnew System::Windows::Forms::Button());
					this->_auto_build = (gcnew System::Windows::Forms::CheckBox());
					this->_text_color_3 = (gcnew System::Windows::Forms::Label());
					this->_color_3 = (gcnew System::Windows::Forms::PictureBox());
					this->_text_color_2 = (gcnew System::Windows::Forms::Label());
					this->_color_2 = (gcnew System::Windows::Forms::PictureBox());
					this->_text_color_1 = (gcnew System::Windows::Forms::Label());
					this->_color_1 = (gcnew System::Windows::Forms::PictureBox());
					this->_max_value = (gcnew System::Windows::Forms::Label());
					this->_field = (gcnew System::Windows::Forms::PictureBox());
					this->_description = (gcnew System::Windows::Forms::Label());
					this->_n = (gcnew System::Windows::Forms::NumericUpDown());
					this->_menu = (gcnew System::Windows::Forms::MenuStrip());
					this->_menu_main = (gcnew System::Windows::Forms::ToolStripMenuItem());
					this->_menu_detail_in = (gcnew System::Windows::Forms::ToolStripMenuItem());
					this->_menu_detail_out = (gcnew System::Windows::Forms::ToolStripMenuItem());
					this->_about = (gcnew System::Windows::Forms::ToolStripMenuItem());
					this->_tab_main->SuspendLayout();
					this->_tab_solve->SuspendLayout();
					this->_group_methods_reverse->SuspendLayout();
					this->_group_methods_LU->SuspendLayout();
					this->_group_matrixes->SuspendLayout();
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->_value))->BeginInit();
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->_rank))->BeginInit();
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->_type))->BeginInit();
					this->_tab_tables->SuspendLayout();
					this->_tab_table->SuspendLayout();
					this->_tab_table_1->SuspendLayout();
					this->_tab_table_2->SuspendLayout();
					this->_tab_table_3->SuspendLayout();
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->_attribute))->BeginInit();
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->_number))->BeginInit();
					this->_tab_charts->SuspendLayout();
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->_color_3))->BeginInit();
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->_color_2))->BeginInit();
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->_color_1))->BeginInit();
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->_field))->BeginInit();
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->_n))->BeginInit();
					this->_menu->SuspendLayout();
					this->SuspendLayout();
					// 
					// _tab_main
					// 
					this->_tab_main->Controls->Add(this->_tab_solve);
					this->_tab_main->Controls->Add(this->_tab_tables);
					this->_tab_main->Controls->Add(this->_tab_charts);
					this->_tab_main->ItemSize = System::Drawing::Size(42, 18);
					this->_tab_main->Location = System::Drawing::Point(12, 34);
					this->_tab_main->Name = L"_tab_main";
					this->_tab_main->SelectedIndex = 0;
					this->_tab_main->Size = System::Drawing::Size(768, 530);
					this->_tab_main->TabIndex = 0;
					// 
					// _tab_solve
					// 
					this->_tab_solve->BackColor = System::Drawing::Color::White;
					this->_tab_solve->Controls->Add(this->_time_progress);
					this->_tab_solve->Controls->Add(this->_auto_clear);
					this->_tab_solve->Controls->Add(this->_text_progress);
					this->_tab_solve->Controls->Add(this->_progress);
					this->_tab_solve->Controls->Add(this->_matrix_output);
					this->_tab_solve->Controls->Add(this->_matrix_input);
					this->_tab_solve->Controls->Add(this->_group_methods_reverse);
					this->_tab_solve->Controls->Add(this->_group_methods_LU);
					this->_tab_solve->Controls->Add(this->_example_3);
					this->_tab_solve->Controls->Add(this->_example_2);
					this->_tab_solve->Controls->Add(this->_example_1);
					this->_tab_solve->Controls->Add(this->_line_2);
					this->_tab_solve->Controls->Add(this->_line_1);
					this->_tab_solve->Controls->Add(this->_det);
					this->_tab_solve->Controls->Add(this->_text_det);
					this->_tab_solve->Controls->Add(this->_clear);
					this->_tab_solve->Controls->Add(this->_text_outputing_matrix);
					this->_tab_solve->Controls->Add(this->_text_inputing_matrix);
					this->_tab_solve->Controls->Add(this->_group_matrixes);
					this->_tab_solve->Controls->Add(this->_solve);
					this->_tab_solve->Location = System::Drawing::Point(4, 22);
					this->_tab_solve->Name = L"_tab_solve";
					this->_tab_solve->Padding = System::Windows::Forms::Padding(3);
					this->_tab_solve->Size = System::Drawing::Size(760, 504);
					this->_tab_solve->TabIndex = 0;
					this->_tab_solve->Text = L"Solve";
					this->_tab_solve->Enter += gcnew System::EventHandler(this, &Form1::_tab_solve_Enter);
					// 
					// _time_progress
					// 
					this->_time_progress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
						static_cast<System::Byte>(204)));
					this->_time_progress->Location = System::Drawing::Point(224, 463);
					this->_time_progress->Name = L"_time_progress";
					this->_time_progress->Size = System::Drawing::Size(212, 17);
					this->_time_progress->TabIndex = 36;
					this->_time_progress->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
					// 
					// _auto_clear
					// 
					this->_auto_clear->Checked = true;
					this->_auto_clear->CheckState = System::Windows::Forms::CheckState::Checked;
					this->_auto_clear->Font = (gcnew System::Drawing::Font(L"Georgia", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
						static_cast<System::Byte>(204)));
					this->_auto_clear->Location = System::Drawing::Point(9, 328);
					this->_auto_clear->Name = L"_auto_clear";
					this->_auto_clear->Size = System::Drawing::Size(121, 20);
					this->_auto_clear->TabIndex = 35;
					this->_auto_clear->Text = L"Auto Clear";
					this->_auto_clear->UseVisualStyleBackColor = true;
					// 
					// _text_progress
					// 
					this->_text_progress->Location = System::Drawing::Point(6, 463);
					this->_text_progress->Name = L"_text_progress";
					this->_text_progress->Size = System::Drawing::Size(212, 17);
					this->_text_progress->TabIndex = 34;
					// 
					// _progress
					// 
					this->_progress->Location = System::Drawing::Point(6, 483);
					this->_progress->Name = L"_progress";
					this->_progress->Size = System::Drawing::Size(430, 14);
					this->_progress->Step = 1;
					this->_progress->TabIndex = 33;
					// 
					// _matrix_output
					// 
					this->_matrix_output->BackColor = System::Drawing::Color::White;
					this->_matrix_output->DetectUrls = false;
					this->_matrix_output->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8.25F));
					this->_matrix_output->Location = System::Drawing::Point(442, 23);
					this->_matrix_output->Name = L"_matrix_output";
					this->_matrix_output->Size = System::Drawing::Size(300, 475);
					this->_matrix_output->TabIndex = 11;
					this->_matrix_output->Text = L"";
					this->_matrix_output->WordWrap = false;
					// 
					// _matrix_input
					// 
					this->_matrix_input->BackColor = System::Drawing::Color::White;
					this->_matrix_input->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8.25F));
					this->_matrix_input->Location = System::Drawing::Point(136, 92);
					this->_matrix_input->Name = L"_matrix_input";
					this->_matrix_input->Size = System::Drawing::Size(300, 230);
					this->_matrix_input->TabIndex = 7;
					this->_matrix_input->Text = L"";
					this->_matrix_input->WordWrap = false;
					// 
					// _group_methods_reverse
					// 
					this->_group_methods_reverse->Controls->Add(this->_methods_reverse_1);
					this->_group_methods_reverse->Controls->Add(this->_methods_reverse_2);
					this->_group_methods_reverse->Font = (gcnew System::Drawing::Font(L"Georgia", 8.25F));
					this->_group_methods_reverse->Location = System::Drawing::Point(224, 6);
					this->_group_methods_reverse->Name = L"_group_methods_reverse";
					this->_group_methods_reverse->Size = System::Drawing::Size(209, 66);
					this->_group_methods_reverse->TabIndex = 32;
					this->_group_methods_reverse->TabStop = false;
					this->_group_methods_reverse->Text = L"Методы обращения";
					// 
					// _methods_reverse_1
					// 
					this->_methods_reverse_1->Checked = true;
					this->_methods_reverse_1->Font = (gcnew System::Drawing::Font(L"Georgia", 8.25F));
					this->_methods_reverse_1->Location = System::Drawing::Point(6, 19);
					this->_methods_reverse_1->Name = L"_methods_reverse_1";
					this->_methods_reverse_1->Size = System::Drawing::Size(197, 17);
					this->_methods_reverse_1->TabIndex = 27;
					this->_methods_reverse_1->TabStop = true;
					this->_methods_reverse_1->Text = L"Первый способ";
					this->_methods_reverse_1->UseVisualStyleBackColor = true;
					// 
					// _methods_reverse_2
					// 
					this->_methods_reverse_2->Font = (gcnew System::Drawing::Font(L"Georgia", 8.25F));
					this->_methods_reverse_2->Location = System::Drawing::Point(6, 42);
					this->_methods_reverse_2->Name = L"_methods_reverse_2";
					this->_methods_reverse_2->Size = System::Drawing::Size(197, 17);
					this->_methods_reverse_2->TabIndex = 28;
					this->_methods_reverse_2->Text = L"Второй способ";
					this->_methods_reverse_2->UseVisualStyleBackColor = true;
					// 
					// _group_methods_LU
					// 
					this->_group_methods_LU->Controls->Add(this->_methods_LU_1);
					this->_group_methods_LU->Controls->Add(this->_methods_LU_2);
					this->_group_methods_LU->Font = (gcnew System::Drawing::Font(L"Georgia", 8.25F));
					this->_group_methods_LU->Location = System::Drawing::Point(9, 6);
					this->_group_methods_LU->Name = L"_group_methods_LU";
					this->_group_methods_LU->Size = System::Drawing::Size(209, 66);
					this->_group_methods_LU->TabIndex = 31;
					this->_group_methods_LU->TabStop = false;
					this->_group_methods_LU->Text = L"Методы LU разложения";
					// 
					// _methods_LU_1
					// 
					this->_methods_LU_1->Checked = true;
					this->_methods_LU_1->Font = (gcnew System::Drawing::Font(L"Georgia", 8.25F));
					this->_methods_LU_1->Location = System::Drawing::Point(6, 19);
					this->_methods_LU_1->Name = L"_methods_LU_1";
					this->_methods_LU_1->Size = System::Drawing::Size(197, 17);
					this->_methods_LU_1->TabIndex = 27;
					this->_methods_LU_1->TabStop = true;
					this->_methods_LU_1->Text = L"Метод Жордана";
					this->_methods_LU_1->UseVisualStyleBackColor = true;
					this->_methods_LU_1->CheckedChanged += gcnew System::EventHandler(this, &Form1::_methods_LU_1_CheckedChanged);
					// 
					// _methods_LU_2
					// 
					this->_methods_LU_2->Font = (gcnew System::Drawing::Font(L"Georgia", 8.25F));
					this->_methods_LU_2->Location = System::Drawing::Point(6, 42);
					this->_methods_LU_2->Name = L"_methods_LU_2";
					this->_methods_LU_2->Size = System::Drawing::Size(197, 17);
					this->_methods_LU_2->TabIndex = 28;
					this->_methods_LU_2->Text = L"Метод окаймления";
					this->_methods_LU_2->UseVisualStyleBackColor = true;
					this->_methods_LU_2->CheckedChanged += gcnew System::EventHandler(this, &Form1::_methods_LU_2_CheckedChanged);
					// 
					// _example_3
					// 
					this->_example_3->Font = (gcnew System::Drawing::Font(L"Georgia", 8.25F));
					this->_example_3->Location = System::Drawing::Point(9, 394);
					this->_example_3->Name = L"_example_3";
					this->_example_3->Size = System::Drawing::Size(121, 21);
					this->_example_3->TabIndex = 26;
					this->_example_3->Text = L"Example 3";
					this->_example_3->UseVisualStyleBackColor = true;
					this->_example_3->Click += gcnew System::EventHandler(this, &Form1::_example_3_Click);
					// 
					// _example_2
					// 
					this->_example_2->Font = (gcnew System::Drawing::Font(L"Georgia", 8.25F));
					this->_example_2->Location = System::Drawing::Point(9, 374);
					this->_example_2->Name = L"_example_2";
					this->_example_2->Size = System::Drawing::Size(121, 21);
					this->_example_2->TabIndex = 25;
					this->_example_2->Text = L"Example 2";
					this->_example_2->UseVisualStyleBackColor = true;
					this->_example_2->Click += gcnew System::EventHandler(this, &Form1::_example_2_Click);
					// 
					// _example_1
					// 
					this->_example_1->Font = (gcnew System::Drawing::Font(L"Georgia", 8.25F));
					this->_example_1->Location = System::Drawing::Point(9, 354);
					this->_example_1->Name = L"_example_1";
					this->_example_1->Size = System::Drawing::Size(121, 21);
					this->_example_1->TabIndex = 24;
					this->_example_1->Text = L"Example 1";
					this->_example_1->UseVisualStyleBackColor = true;
					this->_example_1->Click += gcnew System::EventHandler(this, &Form1::_example_1_Click);
					// 
					// _line_2
					// 
					this->_line_2->Location = System::Drawing::Point(136, 354);
					this->_line_2->Multiline = false;
					this->_line_2->Name = L"_line_2";
					this->_line_2->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
					this->_line_2->Size = System::Drawing::Size(300, 20);
					this->_line_2->TabIndex = 23;
					this->_line_2->Text = L"";
					// 
					// _line_1
					// 
					this->_line_1->Location = System::Drawing::Point(136, 328);
					this->_line_1->Multiline = false;
					this->_line_1->Name = L"_line_1";
					this->_line_1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
					this->_line_1->Size = System::Drawing::Size(300, 20);
					this->_line_1->TabIndex = 22;
					this->_line_1->Text = L"";
					// 
					// _det
					// 
					this->_det->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8.25F));
					this->_det->Location = System::Drawing::Point(182, 377);
					this->_det->Name = L"_det";
					this->_det->Size = System::Drawing::Size(254, 14);
					this->_det->TabIndex = 21;
					this->_det->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
					// 
					// _text_det
					// 
					this->_text_det->Font = (gcnew System::Drawing::Font(L"Georgia", 8.25F, System::Drawing::FontStyle::Bold));
					this->_text_det->Location = System::Drawing::Point(133, 377);
					this->_text_det->Name = L"_text_det";
					this->_text_det->Size = System::Drawing::Size(43, 14);
					this->_text_det->TabIndex = 20;
					this->_text_det->Text = L"DET=";
					this->_text_det->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
					// 
					// _clear
					// 
					this->_clear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
					this->_clear->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Bold));
					this->_clear->Location = System::Drawing::Point(9, 273);
					this->_clear->Name = L"_clear";
					this->_clear->Size = System::Drawing::Size(121, 49);
					this->_clear->TabIndex = 16;
					this->_clear->Text = L"Clear";
					this->_clear->UseVisualStyleBackColor = true;
					this->_clear->Click += gcnew System::EventHandler(this, &Form1::_clear_Click);
					// 
					// _text_outputing_matrix
					// 
					this->_text_outputing_matrix->Font = (gcnew System::Drawing::Font(L"Georgia", 8.25F));
					this->_text_outputing_matrix->Location = System::Drawing::Point(439, 6);
					this->_text_outputing_matrix->Name = L"_text_outputing_matrix";
					this->_text_outputing_matrix->Size = System::Drawing::Size(125, 14);
					this->_text_outputing_matrix->TabIndex = 12;
					this->_text_outputing_matrix->Text = L"Outputing matrix";
					// 
					// _text_inputing_matrix
					// 
					this->_text_inputing_matrix->Font = (gcnew System::Drawing::Font(L"Georgia", 8.25F));
					this->_text_inputing_matrix->Location = System::Drawing::Point(136, 75);
					this->_text_inputing_matrix->Name = L"_text_inputing_matrix";
					this->_text_inputing_matrix->Size = System::Drawing::Size(125, 14);
					this->_text_inputing_matrix->TabIndex = 10;
					this->_text_inputing_matrix->Text = L"Inputing matrix";
					// 
					// _group_matrixes
					// 
					this->_group_matrixes->Controls->Add(this->_value);
					this->_group_matrixes->Controls->Add(this->_accept);
					this->_group_matrixes->Controls->Add(this->_text_rank);
					this->_group_matrixes->Controls->Add(this->_rank);
					this->_group_matrixes->Controls->Add(this->_text_type);
					this->_group_matrixes->Controls->Add(this->_type);
					this->_group_matrixes->Font = (gcnew System::Drawing::Font(L"Georgia", 8.25F));
					this->_group_matrixes->Location = System::Drawing::Point(9, 131);
					this->_group_matrixes->Name = L"_group_matrixes";
					this->_group_matrixes->Size = System::Drawing::Size(121, 136);
					this->_group_matrixes->TabIndex = 9;
					this->_group_matrixes->TabStop = false;
					this->_group_matrixes->Text = L"Matrixes";
					// 
					// _value
					// 
					this->_value->DecimalPlaces = 3;
					this->_value->Enabled = false;
					this->_value->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 196608});
					this->_value->Location = System::Drawing::Point(6, 62);
					this->_value->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1000, 0, 0, 0});
					this->_value->Name = L"_value";
					this->_value->Size = System::Drawing::Size(109, 20);
					this->_value->TabIndex = 9;
					this->_value->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
					// 
					// _accept
					// 
					this->_accept->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
					this->_accept->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Bold));
					this->_accept->Location = System::Drawing::Point(6, 88);
					this->_accept->Name = L"_accept";
					this->_accept->Size = System::Drawing::Size(109, 42);
					this->_accept->TabIndex = 8;
					this->_accept->Text = L"Accept";
					this->_accept->UseVisualStyleBackColor = true;
					this->_accept->Click += gcnew System::EventHandler(this, &Form1::_accept_Click);
					// 
					// _text_rank
					// 
					this->_text_rank->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold));
					this->_text_rank->Location = System::Drawing::Point(6, 39);
					this->_text_rank->Name = L"_text_rank";
					this->_text_rank->Size = System::Drawing::Size(64, 20);
					this->_text_rank->TabIndex = 4;
					this->_text_rank->Text = L"Rank";
					this->_text_rank->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
					// 
					// _rank
					// 
					this->_rank->Location = System::Drawing::Point(76, 39);
					this->_rank->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
					this->_rank->Name = L"_rank";
					this->_rank->Size = System::Drawing::Size(39, 20);
					this->_rank->TabIndex = 3;
					this->_rank->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {3, 0, 0, 0});
					// 
					// _text_type
					// 
					this->_text_type->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold));
					this->_text_type->Location = System::Drawing::Point(6, 16);
					this->_text_type->Name = L"_text_type";
					this->_text_type->Size = System::Drawing::Size(64, 20);
					this->_text_type->TabIndex = 2;
					this->_text_type->Text = L"Type";
					this->_text_type->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
					// 
					// _type
					// 
					this->_type->Location = System::Drawing::Point(76, 16);
					this->_type->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {11, 0, 0, 0});
					this->_type->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
					this->_type->Name = L"_type";
					this->_type->Size = System::Drawing::Size(39, 20);
					this->_type->TabIndex = 1;
					this->_type->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {11, 0, 0, 0});
					this->_type->ValueChanged += gcnew System::EventHandler(this, &Form1::_type_ValueChanged);
					// 
					// _solve
					// 
					this->_solve->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
					this->_solve->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Bold));
					this->_solve->Location = System::Drawing::Point(9, 78);
					this->_solve->Name = L"_solve";
					this->_solve->Size = System::Drawing::Size(121, 47);
					this->_solve->TabIndex = 0;
					this->_solve->Text = L"Solve";
					this->_solve->UseVisualStyleBackColor = true;
					this->_solve->Click += gcnew System::EventHandler(this, &Form1::_solve_Click);
					// 
					// _tab_tables
					// 
					this->_tab_tables->Controls->Add(this->_tab_table);
					this->_tab_tables->Controls->Add(this->_create_table_3);
					this->_tab_tables->Controls->Add(this->_create_table_2);
					this->_tab_tables->Controls->Add(this->_create_table_1);
					this->_tab_tables->Controls->Add(this->_attribute);
					this->_tab_tables->Controls->Add(this->_number);
					this->_tab_tables->Controls->Add(this->_create);
					this->_tab_tables->Location = System::Drawing::Point(4, 22);
					this->_tab_tables->Name = L"_tab_tables";
					this->_tab_tables->Padding = System::Windows::Forms::Padding(3);
					this->_tab_tables->Size = System::Drawing::Size(760, 504);
					this->_tab_tables->TabIndex = 1;
					this->_tab_tables->Text = L"Tables";
					this->_tab_tables->UseVisualStyleBackColor = true;
					this->_tab_tables->Enter += gcnew System::EventHandler(this, &Form1::_tab_tables_Enter);
					// 
					// _tab_table
					// 
					this->_tab_table->Controls->Add(this->_tab_table_1);
					this->_tab_table->Controls->Add(this->_tab_table_2);
					this->_tab_table->Controls->Add(this->_tab_table_3);
					this->_tab_table->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
					this->_tab_table->Location = System::Drawing::Point(6, 89);
					this->_tab_table->Name = L"_tab_table";
					this->_tab_table->SelectedIndex = 0;
					this->_tab_table->Size = System::Drawing::Size(748, 409);
					this->_tab_table->TabIndex = 2;
					// 
					// _tab_table_1
					// 
					this->_tab_table_1->Controls->Add(this->_table_1e);
					this->_tab_table_1->Controls->Add(this->_table_1d);
					this->_tab_table_1->Controls->Add(this->_table_1c);
					this->_tab_table_1->Controls->Add(this->_table_1b);
					this->_tab_table_1->Controls->Add(this->_table_1a);
					this->_tab_table_1->Location = System::Drawing::Point(4, 22);
					this->_tab_table_1->Name = L"_tab_table_1";
					this->_tab_table_1->Padding = System::Windows::Forms::Padding(3);
					this->_tab_table_1->Size = System::Drawing::Size(740, 383);
					this->_tab_table_1->TabIndex = 0;
					this->_tab_table_1->Text = L"Table 1";
					this->_tab_table_1->UseVisualStyleBackColor = true;
					// 
					// _table_1e
					// 
					this->_table_1e->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					this->_table_1e->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
					this->_table_1e->Location = System::Drawing::Point(370, 3);
					this->_table_1e->Name = L"_table_1e";
					this->_table_1e->Size = System::Drawing::Size(85, 375);
					this->_table_1e->TabIndex = 7;
					this->_table_1e->TextAlign = System::Drawing::ContentAlignment::TopCenter;
					// 
					// _table_1d
					// 
					this->_table_1d->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					this->_table_1d->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
					this->_table_1d->Location = System::Drawing::Point(279, 3);
					this->_table_1d->Name = L"_table_1d";
					this->_table_1d->Size = System::Drawing::Size(85, 375);
					this->_table_1d->TabIndex = 6;
					this->_table_1d->TextAlign = System::Drawing::ContentAlignment::TopCenter;
					// 
					// _table_1c
					// 
					this->_table_1c->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					this->_table_1c->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
					this->_table_1c->Location = System::Drawing::Point(188, 3);
					this->_table_1c->Name = L"_table_1c";
					this->_table_1c->Size = System::Drawing::Size(85, 375);
					this->_table_1c->TabIndex = 5;
					this->_table_1c->TextAlign = System::Drawing::ContentAlignment::TopCenter;
					// 
					// _table_1b
					// 
					this->_table_1b->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					this->_table_1b->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
					this->_table_1b->Location = System::Drawing::Point(97, 3);
					this->_table_1b->Name = L"_table_1b";
					this->_table_1b->Size = System::Drawing::Size(85, 375);
					this->_table_1b->TabIndex = 4;
					this->_table_1b->TextAlign = System::Drawing::ContentAlignment::TopCenter;
					// 
					// _table_1a
					// 
					this->_table_1a->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					this->_table_1a->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
					this->_table_1a->Location = System::Drawing::Point(6, 3);
					this->_table_1a->Name = L"_table_1a";
					this->_table_1a->Size = System::Drawing::Size(85, 375);
					this->_table_1a->TabIndex = 3;
					this->_table_1a->TextAlign = System::Drawing::ContentAlignment::TopCenter;
					// 
					// _tab_table_2
					// 
					this->_tab_table_2->Controls->Add(this->_table_2e);
					this->_tab_table_2->Controls->Add(this->_table_2d);
					this->_tab_table_2->Controls->Add(this->_table_2c);
					this->_tab_table_2->Controls->Add(this->_table_2b);
					this->_tab_table_2->Controls->Add(this->_table_2a);
					this->_tab_table_2->Location = System::Drawing::Point(4, 22);
					this->_tab_table_2->Name = L"_tab_table_2";
					this->_tab_table_2->Padding = System::Windows::Forms::Padding(3);
					this->_tab_table_2->Size = System::Drawing::Size(740, 383);
					this->_tab_table_2->TabIndex = 1;
					this->_tab_table_2->Text = L"Table 2";
					this->_tab_table_2->UseVisualStyleBackColor = true;
					// 
					// _table_2e
					// 
					this->_table_2e->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					this->_table_2e->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
					this->_table_2e->Location = System::Drawing::Point(370, 3);
					this->_table_2e->Name = L"_table_2e";
					this->_table_2e->Size = System::Drawing::Size(85, 375);
					this->_table_2e->TabIndex = 12;
					this->_table_2e->TextAlign = System::Drawing::ContentAlignment::TopCenter;
					// 
					// _table_2d
					// 
					this->_table_2d->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					this->_table_2d->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
					this->_table_2d->Location = System::Drawing::Point(279, 3);
					this->_table_2d->Name = L"_table_2d";
					this->_table_2d->Size = System::Drawing::Size(85, 375);
					this->_table_2d->TabIndex = 11;
					this->_table_2d->TextAlign = System::Drawing::ContentAlignment::TopCenter;
					// 
					// _table_2c
					// 
					this->_table_2c->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					this->_table_2c->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
					this->_table_2c->Location = System::Drawing::Point(188, 3);
					this->_table_2c->Name = L"_table_2c";
					this->_table_2c->Size = System::Drawing::Size(85, 375);
					this->_table_2c->TabIndex = 10;
					this->_table_2c->TextAlign = System::Drawing::ContentAlignment::TopCenter;
					// 
					// _table_2b
					// 
					this->_table_2b->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					this->_table_2b->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
					this->_table_2b->Location = System::Drawing::Point(97, 3);
					this->_table_2b->Name = L"_table_2b";
					this->_table_2b->Size = System::Drawing::Size(85, 375);
					this->_table_2b->TabIndex = 9;
					this->_table_2b->TextAlign = System::Drawing::ContentAlignment::TopCenter;
					// 
					// _table_2a
					// 
					this->_table_2a->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					this->_table_2a->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
					this->_table_2a->Location = System::Drawing::Point(6, 3);
					this->_table_2a->Name = L"_table_2a";
					this->_table_2a->Size = System::Drawing::Size(85, 375);
					this->_table_2a->TabIndex = 8;
					this->_table_2a->TextAlign = System::Drawing::ContentAlignment::TopCenter;
					// 
					// _tab_table_3
					// 
					this->_tab_table_3->Controls->Add(this->_table_3d);
					this->_tab_table_3->Controls->Add(this->_table_3h);
					this->_tab_table_3->Controls->Add(this->_table_3g);
					this->_tab_table_3->Controls->Add(this->_table_3f);
					this->_tab_table_3->Controls->Add(this->_table_3e);
					this->_tab_table_3->Controls->Add(this->_table_3c);
					this->_tab_table_3->Controls->Add(this->_table_3b);
					this->_tab_table_3->Controls->Add(this->_table_3a);
					this->_tab_table_3->Location = System::Drawing::Point(4, 22);
					this->_tab_table_3->Name = L"_tab_table_3";
					this->_tab_table_3->Size = System::Drawing::Size(740, 383);
					this->_tab_table_3->TabIndex = 2;
					this->_tab_table_3->Text = L"Table 3";
					this->_tab_table_3->UseVisualStyleBackColor = true;
					// 
					// _table_3d
					// 
					this->_table_3d->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					this->_table_3d->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
					this->_table_3d->Location = System::Drawing::Point(279, 3);
					this->_table_3d->Name = L"_table_3d";
					this->_table_3d->Size = System::Drawing::Size(85, 375);
					this->_table_3d->TabIndex = 12;
					this->_table_3d->TextAlign = System::Drawing::ContentAlignment::TopCenter;
					// 
					// _table_3h
					// 
					this->_table_3h->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					this->_table_3h->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
					this->_table_3h->Location = System::Drawing::Point(643, 3);
					this->_table_3h->Name = L"_table_3h";
					this->_table_3h->Size = System::Drawing::Size(85, 375);
					this->_table_3h->TabIndex = 17;
					this->_table_3h->TextAlign = System::Drawing::ContentAlignment::TopCenter;
					// 
					// _table_3g
					// 
					this->_table_3g->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					this->_table_3g->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
					this->_table_3g->Location = System::Drawing::Point(552, 3);
					this->_table_3g->Name = L"_table_3g";
					this->_table_3g->Size = System::Drawing::Size(85, 375);
					this->_table_3g->TabIndex = 16;
					this->_table_3g->TextAlign = System::Drawing::ContentAlignment::TopCenter;
					// 
					// _table_3f
					// 
					this->_table_3f->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					this->_table_3f->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
					this->_table_3f->Location = System::Drawing::Point(461, 3);
					this->_table_3f->Name = L"_table_3f";
					this->_table_3f->Size = System::Drawing::Size(85, 375);
					this->_table_3f->TabIndex = 15;
					this->_table_3f->TextAlign = System::Drawing::ContentAlignment::TopCenter;
					// 
					// _table_3e
					// 
					this->_table_3e->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					this->_table_3e->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
					this->_table_3e->Location = System::Drawing::Point(370, 3);
					this->_table_3e->Name = L"_table_3e";
					this->_table_3e->Size = System::Drawing::Size(85, 375);
					this->_table_3e->TabIndex = 14;
					this->_table_3e->TextAlign = System::Drawing::ContentAlignment::TopCenter;
					// 
					// _table_3c
					// 
					this->_table_3c->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					this->_table_3c->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
					this->_table_3c->Location = System::Drawing::Point(188, 3);
					this->_table_3c->Name = L"_table_3c";
					this->_table_3c->Size = System::Drawing::Size(85, 375);
					this->_table_3c->TabIndex = 11;
					this->_table_3c->TextAlign = System::Drawing::ContentAlignment::TopCenter;
					// 
					// _table_3b
					// 
					this->_table_3b->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					this->_table_3b->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
					this->_table_3b->Location = System::Drawing::Point(97, 3);
					this->_table_3b->Name = L"_table_3b";
					this->_table_3b->Size = System::Drawing::Size(85, 375);
					this->_table_3b->TabIndex = 9;
					this->_table_3b->TextAlign = System::Drawing::ContentAlignment::TopCenter;
					// 
					// _table_3a
					// 
					this->_table_3a->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					this->_table_3a->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
					this->_table_3a->Location = System::Drawing::Point(6, 3);
					this->_table_3a->Name = L"_table_3a";
					this->_table_3a->Size = System::Drawing::Size(85, 375);
					this->_table_3a->TabIndex = 8;
					this->_table_3a->TextAlign = System::Drawing::ContentAlignment::TopCenter;
					// 
					// _create_table_3
					// 
					this->_create_table_3->Checked = true;
					this->_create_table_3->CheckState = System::Windows::Forms::CheckState::Checked;
					this->_create_table_3->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
						static_cast<System::Byte>(204)));
					this->_create_table_3->Location = System::Drawing::Point(137, 62);
					this->_create_table_3->Name = L"_create_table_3";
					this->_create_table_3->Size = System::Drawing::Size(105, 21);
					this->_create_table_3->TabIndex = 15;
					this->_create_table_3->Text = L"Create Table 3";
					this->_create_table_3->UseVisualStyleBackColor = true;
					// 
					// _create_table_2
					// 
					this->_create_table_2->Checked = true;
					this->_create_table_2->CheckState = System::Windows::Forms::CheckState::Checked;
					this->_create_table_2->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
						static_cast<System::Byte>(204)));
					this->_create_table_2->Location = System::Drawing::Point(137, 35);
					this->_create_table_2->Name = L"_create_table_2";
					this->_create_table_2->Size = System::Drawing::Size(105, 21);
					this->_create_table_2->TabIndex = 14;
					this->_create_table_2->Text = L"Create Table 2";
					this->_create_table_2->UseVisualStyleBackColor = true;
					this->_create_table_2->CheckedChanged += gcnew System::EventHandler(this, &Form1::_create_table_2_CheckedChanged);
					// 
					// _create_table_1
					// 
					this->_create_table_1->Checked = true;
					this->_create_table_1->CheckState = System::Windows::Forms::CheckState::Checked;
					this->_create_table_1->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
						static_cast<System::Byte>(204)));
					this->_create_table_1->Location = System::Drawing::Point(137, 8);
					this->_create_table_1->Name = L"_create_table_1";
					this->_create_table_1->Size = System::Drawing::Size(105, 21);
					this->_create_table_1->TabIndex = 13;
					this->_create_table_1->Text = L"Create Table 1";
					this->_create_table_1->UseVisualStyleBackColor = true;
					// 
					// _attribute
					// 
					this->_attribute->DecimalPlaces = 3;
					this->_attribute->Enabled = false;
					this->_attribute->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
					this->_attribute->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 196608});
					this->_attribute->Location = System::Drawing::Point(293, 35);
					this->_attribute->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1000, 0, 0, 0});
					this->_attribute->Name = L"_attribute";
					this->_attribute->Size = System::Drawing::Size(80, 21);
					this->_attribute->TabIndex = 12;
					this->_attribute->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
					// 
					// _number
					// 
					this->_number->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
					this->_number->Location = System::Drawing::Point(248, 35);
					this->_number->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {11, 0, 0, 0});
					this->_number->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
					this->_number->Name = L"_number";
					this->_number->Size = System::Drawing::Size(39, 21);
					this->_number->TabIndex = 10;
					this->_number->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
					this->_number->ValueChanged += gcnew System::EventHandler(this, &Form1::_number_ValueChanged);
					// 
					// _create
					// 
					this->_create->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Bold));
					this->_create->Location = System::Drawing::Point(6, 8);
					this->_create->Name = L"_create";
					this->_create->Size = System::Drawing::Size(125, 48);
					this->_create->TabIndex = 1;
					this->_create->Text = L"Create";
					this->_create->UseVisualStyleBackColor = true;
					this->_create->Click += gcnew System::EventHandler(this, &Form1::_create_Click);
					// 
					// _tab_charts
					// 
					this->_tab_charts->Controls->Add(this->_build);
					this->_tab_charts->Controls->Add(this->_auto_build);
					this->_tab_charts->Controls->Add(this->_text_color_3);
					this->_tab_charts->Controls->Add(this->_color_3);
					this->_tab_charts->Controls->Add(this->_text_color_2);
					this->_tab_charts->Controls->Add(this->_color_2);
					this->_tab_charts->Controls->Add(this->_text_color_1);
					this->_tab_charts->Controls->Add(this->_color_1);
					this->_tab_charts->Controls->Add(this->_max_value);
					this->_tab_charts->Controls->Add(this->_field);
					this->_tab_charts->Controls->Add(this->_description);
					this->_tab_charts->Controls->Add(this->_n);
					this->_tab_charts->Location = System::Drawing::Point(4, 22);
					this->_tab_charts->Name = L"_tab_charts";
					this->_tab_charts->Padding = System::Windows::Forms::Padding(3);
					this->_tab_charts->Size = System::Drawing::Size(760, 504);
					this->_tab_charts->TabIndex = 2;
					this->_tab_charts->Text = L"Charts";
					this->_tab_charts->UseVisualStyleBackColor = true;
					this->_tab_charts->Enter += gcnew System::EventHandler(this, &Form1::_tab_charts_Enter);
					// 
					// _build
					// 
					this->_build->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F));
					this->_build->Location = System::Drawing::Point(9, 6);
					this->_build->Name = L"_build";
					this->_build->Size = System::Drawing::Size(138, 50);
					this->_build->TabIndex = 0;
					this->_build->Text = L"Build";
					this->_build->UseVisualStyleBackColor = true;
					this->_build->Click += gcnew System::EventHandler(this, &Form1::_build_Click);
					// 
					// _auto_build
					// 
					this->_auto_build->Checked = true;
					this->_auto_build->CheckState = System::Windows::Forms::CheckState::Checked;
					this->_auto_build->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
						static_cast<System::Byte>(204)));
					this->_auto_build->Location = System::Drawing::Point(153, 22);
					this->_auto_build->Name = L"_auto_build";
					this->_auto_build->Size = System::Drawing::Size(120, 24);
					this->_auto_build->TabIndex = 11;
					this->_auto_build->Text = L"Auto Build";
					this->_auto_build->UseVisualStyleBackColor = true;
					// 
					// _text_color_3
					// 
					this->_text_color_3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F));
					this->_text_color_3->Location = System::Drawing::Point(179, 124);
					this->_text_color_3->Name = L"_text_color_3";
					this->_text_color_3->Size = System::Drawing::Size(91, 17);
					this->_text_color_3->TabIndex = 10;
					this->_text_color_3->Visible = false;
					// 
					// _color_3
					// 
					this->_color_3->BackColor = System::Drawing::Color::Green;
					this->_color_3->Location = System::Drawing::Point(153, 124);
					this->_color_3->Name = L"_color_3";
					this->_color_3->Size = System::Drawing::Size(20, 17);
					this->_color_3->TabIndex = 9;
					this->_color_3->TabStop = false;
					this->_color_3->Visible = false;
					// 
					// _text_color_2
					// 
					this->_text_color_2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F));
					this->_text_color_2->Location = System::Drawing::Point(179, 101);
					this->_text_color_2->Name = L"_text_color_2";
					this->_text_color_2->Size = System::Drawing::Size(91, 17);
					this->_text_color_2->TabIndex = 8;
					this->_text_color_2->Text = L"Теорет. Ч.О.";
					// 
					// _color_2
					// 
					this->_color_2->BackColor = System::Drawing::Color::Blue;
					this->_color_2->Location = System::Drawing::Point(153, 101);
					this->_color_2->Name = L"_color_2";
					this->_color_2->Size = System::Drawing::Size(20, 17);
					this->_color_2->TabIndex = 7;
					this->_color_2->TabStop = false;
					// 
					// _text_color_1
					// 
					this->_text_color_1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F));
					this->_text_color_1->Location = System::Drawing::Point(179, 78);
					this->_text_color_1->Name = L"_text_color_1";
					this->_text_color_1->Size = System::Drawing::Size(91, 17);
					this->_text_color_1->TabIndex = 6;
					this->_text_color_1->Text = L"Реальное Ч.О.";
					// 
					// _color_1
					// 
					this->_color_1->BackColor = System::Drawing::Color::Red;
					this->_color_1->Location = System::Drawing::Point(153, 78);
					this->_color_1->Name = L"_color_1";
					this->_color_1->Size = System::Drawing::Size(20, 17);
					this->_color_1->TabIndex = 5;
					this->_color_1->TabStop = false;
					// 
					// _max_value
					// 
					this->_max_value->Location = System::Drawing::Point(153, 6);
					this->_max_value->Name = L"_max_value";
					this->_max_value->Size = System::Drawing::Size(120, 13);
					this->_max_value->TabIndex = 4;
					this->_max_value->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
					// 
					// _field
					// 
					this->_field->BackColor = System::Drawing::Color::White;
					this->_field->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					this->_field->Location = System::Drawing::Point(279, 6);
					this->_field->Name = L"_field";
					this->_field->Size = System::Drawing::Size(475, 400);
					this->_field->TabIndex = 3;
					this->_field->TabStop = false;
					// 
					// _description
					// 
					this->_description->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
					this->_description->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F));
					this->_description->Location = System::Drawing::Point(6, 59);
					this->_description->Name = L"_description";
					this->_description->Size = System::Drawing::Size(141, 82);
					this->_description->TabIndex = 2;
					this->_description->Text = L"Зависимость реального и оценочного числа операций от порядка матрицы";
					// 
					// _n
					// 
					this->_n->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F));
					this->_n->Location = System::Drawing::Point(153, 52);
					this->_n->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {6, 0, 0, 0});
					this->_n->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
					this->_n->Name = L"_n";
					this->_n->Size = System::Drawing::Size(44, 23);
					this->_n->TabIndex = 1;
					this->_n->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
					this->_n->ValueChanged += gcnew System::EventHandler(this, &Form1::_n_ValueChanged);
					// 
					// _menu
					// 
					this->_menu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->_menu_main, this->_about});
					this->_menu->Location = System::Drawing::Point(0, 0);
					this->_menu->Name = L"_menu";
					this->_menu->Size = System::Drawing::Size(794, 24);
					this->_menu->TabIndex = 1;
					this->_menu->Text = L"Menu";
					// 
					// _menu_main
					// 
					this->_menu_main->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->_menu_detail_in, 
						this->_menu_detail_out});
					this->_menu_main->Name = L"_menu_main";
					this->_menu_main->Size = System::Drawing::Size(41, 20);
					this->_menu_main->Text = L"Main";
					// 
					// _menu_detail_in
					// 
					this->_menu_detail_in->CheckOnClick = true;
					this->_menu_detail_in->Name = L"_menu_detail_in";
					this->_menu_detail_in->Size = System::Drawing::Size(182, 22);
					this->_menu_detail_in->Text = L"Detail Input Matrix";
					this->_menu_detail_in->Click += gcnew System::EventHandler(this, &Form1::_menu_detail_in_Click);
					// 
					// _menu_detail_out
					// 
					this->_menu_detail_out->CheckOnClick = true;
					this->_menu_detail_out->Name = L"_menu_detail_out";
					this->_menu_detail_out->Size = System::Drawing::Size(182, 22);
					this->_menu_detail_out->Text = L"Detail Output Matrix";
					this->_menu_detail_out->Click += gcnew System::EventHandler(this, &Form1::_manu_detail_out_Click);
					// 
					// _about
					// 
					this->_about->Name = L"_about";
					this->_about->Size = System::Drawing::Size(48, 20);
					this->_about->Text = L"About";
					this->_about->Click += gcnew System::EventHandler(this, &Form1::_about_Click);
					// 
					// Form1
					// 
					this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
					this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
					this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
					this->BackColor = System::Drawing::Color::Gray;
					this->ClientSize = System::Drawing::Size(794, 576);
					this->Controls->Add(this->_tab_main);
					this->Controls->Add(this->_menu);
					this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
					this->Name = L"Form1";
					this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
					this->Text = L"МЕТОД ПЕРВЫЙ";
					this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
					this->_tab_main->ResumeLayout(false);
					this->_tab_solve->ResumeLayout(false);
					this->_group_methods_reverse->ResumeLayout(false);
					this->_group_methods_LU->ResumeLayout(false);
					this->_group_matrixes->ResumeLayout(false);
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->_value))->EndInit();
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->_rank))->EndInit();
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->_type))->EndInit();
					this->_tab_tables->ResumeLayout(false);
					this->_tab_table->ResumeLayout(false);
					this->_tab_table_1->ResumeLayout(false);
					this->_tab_table_2->ResumeLayout(false);
					this->_tab_table_3->ResumeLayout(false);
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->_attribute))->EndInit();
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->_number))->EndInit();
					this->_tab_charts->ResumeLayout(false);
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->_color_3))->EndInit();
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->_color_2))->EndInit();
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->_color_1))->EndInit();
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->_field))->EndInit();
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->_n))->EndInit();
					this->_menu->ResumeLayout(false);
					this->_menu->PerformLayout();
					this->ResumeLayout(false);
					this->PerformLayout();

				}
#pragma endregion
#pragma endregion
				//общие функции
				bool InA(System::Windows::Forms::RichTextBox^ _RTB)
				{
					int i1,i2;
					ifstream ifs;
					ofstream ofs;
					N=0;
					for(i1=0;i1<_RTB->Text->Length;i1++)
					{
						if(_RTB->Text[i1]=='\n')
						{
							N++;
						}
					}
					ofs.open("InA.txt");
					if(!ofs)
					{
						ERROR("Невозможно создать файл InA.txt");
						return false;
					}
					for(i1=0;i1<_RTB->Text->Length;i1++)
					{
						if(_RTB->Text[i1]==',')
						{
							ofs << (char)('.');
						}
						else
						{
							ofs << ((char)(_RTB->Text[i1]));
						}
					}
					ofs.close();
					ifs.open("InA.txt");
					if(!ifs)
					{
						ERROR("Невозможно открыть файл InA.txt");
						return false;
					}
					for(i1=0;i1<N;i1++)
					{
						for(i2=0;i2<N;i2++)
						{
							ifs >> A[i1][i2];
						}
					}
					ifs.close();
					return true;
				}
				bool InC(System::Windows::Forms::RichTextBox^ _RTB)
				{
					int i1;
					ifstream ifs;
					ofstream ofs;
					ofs.open("InC.txt");
					if(!ofs)
					{
						ERROR("Невозможно создать файл InC.txt");
						return false;
					}
					for(i1=0;i1<_RTB->Text->Length;i1++)
					{
						if(_RTB->Text[i1]==',')
						{
							ofs << (char)('.');
						}
						else
						{
							ofs << ((char)(_RTB->Text[i1]));
						}
					}
					ofs.close();
					ifs.open("InC.txt");
					if(!ifs)
					{
						ERROR("Невозможно открыть файл InC.txt");
						return false;
					}
					for(i1=0;i1<N;i1++)
					{
						ifs >> C[i1];
					}
					ifs.close();
					return true;
				}
				void NormalizeB(int n)
				{
					int i1;
					for(i1=0;i1<n;i1++)
					{
						B[i1]=i1;
					}
				}
				void ClearA(int n)
				{
					int i1,i2;
					for(i1=0;i1<n;i1++)
					{
						for(i2=0;i2<n;i2++)
						{
							A[i1][i2]=0;
						}
					}
				}
				void ClearC(int n)
				{
					int i1;
					for(i1=0;i1<n;i1++)
					{
						C[i1]=0;
					}
				}
				void ClearD(int n)
				{
					int i1;
					for(i1=0;i1<n;i1++)
					{
						D[i1]=0;
					}
				}
				bool VerificationA(int n)
				{
					int i1,i2;
					for(i1=0;i1<n;i1++)
					{
						for(i2=0;i2<n;i2++)
						{
							if(double::IsInfinity(A[i1][i2]))
							{
								ERROR("Одно из значений матрицы - бесконечность");
								return false;
							}
							if(double::IsNaN(A[i1][i2]))
							{
								ERROR("Одно из значений матрицы не определено");
								return false;
							}
						}
					}
					return true;
				}
				bool VerificationC(int n)
				{
					int i1;
					for(i1=0;i1<n;i1++)
					{
						if(double::IsInfinity(C[i1]))
						{
							ERROR("Одно из значений вектора C - бесконечность");
							return false;
						}
						if(double::IsNaN(C[i1]))
						{
							ERROR("Одно из значений вектора C не определено");
							return false;
						}
					}
					return true;
				}
				bool VerificationD(int n)
				{
					int i1;
					for(i1=0;i1<n;i1++)
					{
						if(double::IsInfinity(D[i1]))
						{
							ERROR("Одно из значений вектора D - бесконечность");
							return false;
						}
						if(double::IsNaN(D[i1]))
						{
							ERROR("Одно из значений вектора D не определено");
							return false;
						}
					}
					return true;
				}
				void OutA(System::Windows::Forms::RichTextBox^ _RTB,bool X)
				{
					int i1,i2;
					int x;
					for(i1=0;i1<N;i1++)
					{
						//Application::DoEvents();
						for(i2=0;i2<N;i2++)
						{
							x=i1;
							if(X)
							{
								x=B[i1];
							}
							_RTB->Text+=A[x][i2].ToString();
							if(i2!=N-1)
							{
								_RTB->Text+=" ";
							}
							if(i2==N-1)
							{
								_RTB->Text+="\n";
							}
						}
					}
				}
				void OutC(System::Windows::Forms::RichTextBox^ _RTB,bool X)
				{
					int i1;
					int x;
					for(i1=0;i1<N;i1++)
					{
						x=i1;
						if(X)
						{
							x=B[i1];
						}
						_RTB->Text+=C[x].ToString()+" ";
					}
				}
				void ERROR(String^ s1)
				{
					MessageBox::Show(s1,"Ошибка",MessageBoxButtons::OK,MessageBoxIcon::Error);
				}
				void WARNING(String^ s1)
				{
					MessageBox::Show(s1,"Предупреждение",MessageBoxButtons::OK,MessageBoxIcon::Warning);
				}
				void INFO(String^ s1)
				{
					MessageBox::Show(s1,"Информация",MessageBoxButtons::OK,MessageBoxIcon::Information);
				}
				int HexToInt(char c)
				{
					switch(c)
					{
					case '0':
						return 0;
					case '1':
						return 1;
					case '2':
						return 2;
					case '3':
						return 3;
					case '4':
						return 4;
					case '5':
						return 5;
					case '6':
						return 6;
					case '7':
						return 7;
					case '8':
						return 8;
					case '9':
						return 9;
					case 'A':
						return 10;
					case 'B':
						return 11;
					case 'C':
						return 12;
					case 'D':
						return 13;
					case 'E':
						return 14;
					case 'F':
						return 15;
					}
					return -1;
				}
				bool CreateC()
				{
					int i1,i2;
					for(i1=0;i1<N;i1++)
					{
						C[i1]=0;
						for(i2=0;i2<N;i2++)
						{
							C[i1]+=A[i1][i2]*(i2+1);
						}
					}
					if(!VerificationC(N))
					{
						return false;
					}
					return true;
				}
				bool CreateMatrix(int type,double value)
				{
					int i1,i2;
					String^ data3="54756754C8788678A9877579B9756889A8978778AA56759AA";
					String^ data6="2535111162641111352535116462641111352535116462641111352511116462";
					switch(type)
					{
					case 1:
						for(i1=0;i1<N;i1++)
						{
							for(i2=0;i2<N;i2++)
							{
								A[i1][i2]=1/(double)(i1+i2+1);
							}
						}
						break;
					case 2:
						N=20;
						ClearA(20);
						for(i1=0;i1<20;i1++)
						{
							A[i1][i1]=1;
						}
						for(i1=0;i1<19;i1++)
						{
							A[i1][i1+1]=1;
						}
						break;
					case 3:
						N=7;
						for(i1=0;i1<N;i1++)
						{
							for(i2=0;i2<N;i2++)
							{
								A[i1][i2]=HexToInt((char)(data3[i1*N+i2]));
							}
						}
						break;
					case 4:
						for(i1=0;i1<N;i1++)
						{
							for(i2=0;i2<N;i2++)
							{
								if(i1==i2)
								{
									A[i1][i2]=0.01/((double)((N-i1)*(i1+2)));
								}
								if(i1<i2)
								{
									A[i1][i2]=0;
								}
								if(i1>i2)
								{
									A[i1][i2]=(double)(i1+1)/(double)(N-i2-1);
								}
							}
						}
						break;
					case 5:
						for(i1=0;i1<N;i1++)
						{
							for(i2=0;i2<N;i2++)
							{
								if(i1==i2)
								{
									A[i1][i2]=0.01/((double)((N-i1)*(i1+2)));
								}
								if(i1<i2)
								{
									A[i1][i2]=(double)(i2+1)/(double)(N-i1-1);
								}
								if(i1>i2)
								{
									A[i1][i2]=(double)(i1+1)/(double)(N-i2-1);
								}
							}
						}
						break;
					case 6:
						N=8;
						for(i1=0;i1<N;i1++)
						{
							for(i2=0;i2<N;i2++)
							{
								switch((char)data6[i1*N+i2])
								{
								case '1':
									A[i1][i2]=1;
									break;
								case '2':
									A[i1][i2]=1/System::Math::Tan(value);
									break;
								case '3':
									A[i1][i2]=(1-1/System::Math::Tan(value));
									break;
								case '4':
									A[i1][i2]=(1+1/System::Math::Tan(value));
									break;
								case '5':
									A[i1][i2]=(1/System::Math::Cos(value));
									break;
								case '6':
									A[i1][i2]=(-1/System::Math::Cos(value));
									break;
								}
							}
						}
						break;
					case 7:
						ClearA(N);
						for(i1=0;i1<N;i1++)
						{
							A[i1][i1]=Math::Pow(value,Math::Abs(N-2*i1-2)/2);
							A[0][i1]=A[0][0]/Math::Pow(value,i1+1);
							A[i1][0]=A[0][0]/Math::Pow(value,i1+1);
							A[N][i1]=A[N][N]/Math::Pow(value,i1+1);
							A[i1][N]=A[N][N]/Math::Pow(value,i1+1);
						}
						break;
					case 8:
						for(i1=0;i1<N;i1++)
						{
							for(i2=0;i2<N;i2++)
							{
								A[i1][i2]=Math::Exp((double)(i1+1)*(i2+1)*value);
							}
						}
						break;
					case 9:
						for(i1=0;i1<N;i1++)
						{
							for(i2=0;i2<N;i2++)
							{
								A[i1][i2]=value+Math::Log((double)(i1+1)*(i2+1),2);
							}
						}
						break;
					case 10:
						N=4;
						A[0][0]=0.00009143;
						A[0][1]=0;
						A[0][2]=0;
						A[0][3]=0;
						A[1][0]=0.8762;
						A[1][1]=0.00007156;
						A[1][2]=0;
						A[1][3]=0;
						A[2][0]=0.7943;
						A[2][1]=0.8143;
						A[2][2]=0.00009504;
						A[2][3]=0;
						A[3][0]=0.8017;
						A[3][1]=0.613;
						A[3][2]=0.7165;
						A[3][3]=0.00007123;
						break;
					case 11:
						Random^ random = gcnew Random;
						for(i1=0;i1<N;i1++)
						{
							for(i2=0;i2<N;i2++)
							{
								A[i1][i2]=100*(2*random->NextDouble()-1);
							}
						}
						break;
					}
					if(!VerificationA(N))
					{
						return false;
					}
					return true;
				}
				bool LUDet()
				{
					int i1;
					for(i1=0;i1<N;i1++)
					{
						DET*=A[B[i1]][i1];
					}
					if(double::IsInfinity(DET))
					{
						ERROR("Определитель не может быть равным бесконечности");
						return false;
					}
					if(double::IsNaN(DET))
					{
						ERROR("Определитель не может быть не определен");
						return false;
					}
					return true;
				}
				//LU разложение первым способом
				//LU разложение
				bool aAToLU(bool output,bool count)
				{
					int i1,i2,i3;
					double max;
					int maxi;
					DET=1;
					for(i1=0;i1<N-1;i1++)
					{
						max=Math::Abs(A[B[i1]][i1]);
						maxi=i1;
						for(i2=i1+1;i2<N;i2++)
						{
							if(Math::Abs(A[B[i2]][i1])>max)
							{
								max=Math::Abs(A[B[i2]][i1]);
								maxi=i2;
							}
						}
						if(B[maxi]!=B[i1])
						{
							DET*=-1;
							i2=B[maxi];
							B[maxi]=B[i1];
							B[i1]=i2;
						}
						if(output)
						{
							_matrix_output->Text+="выбор главного элемента в "+(i1+1).ToString()+" столбце\n";
							OutA(_matrix_output,true);
						}
						if(A[B[i1]][i1]==0)
						{
							ERROR("Деление на ноль при нормировке "+(i1+1).ToString()+" строки");
							return false;
						}
						for(i2=i1+1;i2<N;i2++)
						{
							A[B[i1]][i2]/=A[B[i1]][i1];
							if(count)
							{
								COUNT++;
							}
						}
						if(output)
						{
							_matrix_output->Text+="нормировка "+(i1+1).ToString()+" строки\n";
							OutA(_matrix_output,true);
						}
						for(i2=0;i2<N;i2++)
						{
							if(i2!=i1)
							{
								for(i3=i1+1;i3<N;i3++)
								{
									A[B[i2]][i3]-=A[B[i2]][i1]*A[B[i1]][i3];
									if(count)
									{
										COUNT++;
									}
								}
							}
						}
						if(output)
						{
							_matrix_output->Text+="серия вычитаний из "+(i1+1).ToString()+" строки\n";
							OutA(_matrix_output,true);
							_progress->Value=(int)(100*i1/(N-1));
						}
					}
					for(i1=0;i1<N;i1++)
					{
						for(i2=i1+1;i2<N;i2++)
						{
							A[B[i1]][i2]*=-1;
							if(count)
							{
								COUNT++;
							}
						}
					}
					if(output)
					{
						_matrix_output->Text+="умножение U на -1\n";
						OutA(_matrix_output,true);
						_matrix_output->Text+="LU-1\n";
						OutA(_matrix_output,true);
						_progress->Value=100;
					}
					if(VerificationA(N)==false)
					{
						return false;
					}
					return true;
				}
				//решение системы
				bool aSolveSystem(bool count)
				{
					int i1,i2;
					//L*y=f y=?
					for(i1=0;i1<N;i1++)
					{
						D[i1]=C[B[i1]];
						for(i2=0;i2<i1;i2++)
						{
							D[i1]-=A[B[i1]][i2]*D[i2];
							if(count)
							{
								COUNT++;
							}
						}
						D[i1]/=A[B[i1]][i1];
						if(count)
						{
							COUNT++;
						}
					}
					if(!VerificationD(N))
					{
						return false;
					}
					//x=U-1*y
					for(i1=0;i1<N;i1++)
					{
						C[i1]=D[i1];
						for(i2=i1+1;i2<N;i2++)
						{
							C[i1]+=D[i2]*A[B[i1]][i2];
							if(count)
							{
								COUNT++;
							}
						}
					}
					if(!VerificationC(N))
					{
						return false;
					}
					return true;
				}
				//обращение матрицы A первым способом
				bool aReverseAFirst(bool count)
				{
					int i1,i2,i3;
					double AA[size][size];
					for(i1=0;i1<N;i1++)
					{
						for(i2=0;i2<i1;i2++)
						{
							D[i2]=0;
						}
						D[i1]=1/A[B[i1]][i1];
						if(count)
						{
							COUNT++;
						}
						for(i2=i1+1;i2<N;i2++)
						{
							D[i2]=0;
							for(i3=0;i3<i2;i3++)
							{
								D[i2]-=A[B[i2]][i3]*D[i3];
								if(count)
								{
									COUNT++;
								}
							}
							D[i2]/=A[B[i2]][i2];
							if(count)
							{
								COUNT++;
							}
						}
						for(i2=0;i2<N;i2++)
						{
							C[i2]=D[i2];
							for(i3=i2+1;i3<N;i3++)
							{
								C[i2]+=D[i3]*A[B[i2]][i3];
								if(count)
								{
									COUNT++;
								}
							}
						}
						if(!VerificationC(N))
						{
							return false;
						}
						for(i2=0;i2<N;i2++)
						{
							AA[B[i2]][B[i1]]=C[B[i2]];
						}
					}
					for(i1=0;i1<N;i1++)
					{
						for(i2=0;i2<N;i2++)
						{
							A[i1][i2]=AA[i1][i2];
						}
					}
					return true;
				}
				//обращение матрицы A вторым способом
				bool aReverseASecond(bool count)
				{
					double AA[size][size];
					int i1,i2,i3;
					//
					for(i1=0;i1<N;i1++)
					{
						A[B[i1]][i1]=1/A[B[i1]][i1];
						if(count)
						{
							COUNT++;
						}
					}
					for(i1=0;i1<N;i1++)
					{
						for(i2=0;i2<i1;i2++)
						{
							A[B[i1]][i2]*=-A[B[i2]][i2];
							if(count)
							{
								COUNT++;
								COUNT++;
							}
						}
					}
					//
					for(i1=0;i1<N-1;i1++)
					{
						for(i2=i1+1;i2<N;i2++)
						{
							for(i3=0;i3<=i1;i3++)
							{
								C[i3]=A[B[i2]][i3];
								if(i2==i1+1)
								{
									C[i3]*=A[B[i2]][i2];
									if(count)
									{
										COUNT++;
									}
								}
								else
								{
									C[i3]+=A[B[i2]][i1+1]*A[B[i1+1]][i3];
									if(count)
									{
										COUNT++;
									}
								}
							}
							for(i3=0;i3<=i1;i3++)
							{
								AA[i2][i3]=C[i3];
							}
						}
						for(i2=i1+1;i2<N;i2++)
						{
							for(i3=0;i3<=i1;i3++)
							{
								A[B[i2]][i3]=AA[i2][i3];
							}
						}
					}
					//
					for(i1=0;i1<N;i1++)
					{
						for(i2=0;i2<N;i2++)
						{
							AA[i1][B[i2]]=0;
							if(i1>=i2)
							{
								AA[i1][B[i2]]=A[B[i1]][i2];
							}
							for(i3=Math::Max(i2,i1+1);i3<N;i3++)
							{
								AA[i1][B[i2]]+=A[B[i1]][i3]*A[B[i3]][i2];
								if(count)
								{
									COUNT++;
								}
							}
						}
					}
					for(i1=0;i1<N;i1++)
					{
						for(i2=0;i2<N;i2++)
						{
							A[i1][i2]=AA[i1][i2];
						}
					}
					if(!VerificationA(N))
					{
						return false;
					}
					return true;
				}
				//LU разложение вторым способом
				//LU разложение
				bool bAToLU(bool output,bool count)
				{
					int i1,i2,i3;
					double max;
					double d1;
					int maxi;
					DET=1;
					for(i1=N-1;i1>=0;i1--)
					{
						if(output)
						{
							_matrix_output->Text+="выбор главного элемента в "+(i1+1).ToString()+" столбце\n";
							OutA(_matrix_output,true);
						}
						d1=0;
						for(i2=N-1;i2>i1;i2--)
						{
							for(i3=i1;i3>=0;i3--)
							{
								d1-=A[B[i1]][i2]*A[B[i2]][i3];
							}
						}
						max=Math::Abs(A[B[i1]][i1]+d1);
						maxi=i1;
						for(i2=0;i2<i1;i2++)
						{
							if(Math::Abs(A[B[i2]][i1]+d1)>max)
							{
								max=Math::Abs(A[B[i2]][i1]+d1);
								maxi=i2;
							}
						}
						if(B[maxi]!=B[i1])
						{
							DET*=-1;
							i2=B[maxi];
							B[maxi]=B[i1];
							B[i1]=i2;
						}
						//
						for(i2=N-1;i2>i1;i2--)
						{
							for(i3=i1;i3>=0;i3--)
							{
								A[B[i1]][i3]-=A[B[i1]][i2]*A[B[i2]][i3];
								if(count)
								{
									COUNT++;
								}
							}
						}
						if(output)
						{
							_matrix_output->Text+="серия вычитаний для нахождения "+(i1+1).ToString()+" строки\n";
							OutA(_matrix_output,true);
						}
						//
						for(i2=N-1;i2>i1;i2--)
						{
							for(i3=i1-1;i3>=0;i3--)
							{
								A[B[i3]][i1]-=A[B[i3]][i2]*A[B[i2]][i1];
								if(count)
								{
									COUNT++;
								}
							}
						}
						if(output)
						{
							_matrix_output->Text+="серия вычитаний для нахождения "+(i1+1).ToString()+" столбца\n";
							OutA(_matrix_output,true);
						}
						for(i2=i1-1;i2>=0;i2--)
						{
							if(A[B[i1]][i1]==0)
							{
								ERROR("Деление на ноль при LU разложении");
								return false;
							}
							A[B[i2]][i1]/=A[B[i1]][i1];
							if(count)
							{
								COUNT++;
							}
						}
						if(output)
						{
							_matrix_output->Text+="деление "+(i1+1).ToString()+" столбца\n";
							OutA(_matrix_output,true);
							_progress->Value=(int)(100*(1-(double)i1/N));
						}
					}
					if(output)
					{
						_matrix_output->Text+="UL\n";
						OutA(_matrix_output,true);
					}
					if(!VerificationA(N))
					{
						return false;
					}
					return true;
				}
				//решение системы
				bool bSolveSystem(bool count)
				{
					int i1,i2;
					//U*y=f y=?
					for(i1=N-1;i1>=0;i1--)
					{
						D[i1]=C[B[i1]];
						for(i2=i1+1;i2<N;i2++)
						{
							D[i1]-=A[B[i1]][i2]*D[i2];
							if(count)
							{
								COUNT++;
							}
						}
					}
					if(!VerificationD(N))
					{
						return false;
					}
					//L*x=y x=?
					for(i1=0;i1<N;i1++)
					{
						C[i1]=D[i1];
						for(i2=0;i2<i1;i2++)
						{
							C[i1]-=A[B[i1]][i2]*C[i2];
							if(count)
							{
								COUNT++;
							}
						}
						C[i1]/=A[B[i1]][i1];
						if(count)
						{
							COUNT++;
						}
					}
					if(!VerificationC(N))
					{
						return false;
					}
					return true;
				}
				//обращение матрицы A первым способом
				bool bReverseAFirst(bool count)
				{
					int i1,i2,i3;
					double AA[size][size];
					for(i1=0;i1<N;i1++)
					{
						for(i2=N-1;i2>i1;i2--)
						{
							D[i2]=0;
						}
						D[i1]=1;
						for(i2=i1-1;i2>=0;i2--)
						{
							D[i2]=0;
							for(i3=i2+1;i3<N;i3++)
							{
								D[i2]-=A[B[i2]][i3]*D[i3];
								if(count)
								{
									COUNT++;
								}
							}
						}
						for(i2=0;i2<N;i2++)
						{
							C[i2]=D[i2];
							for(i3=0;i3<i2;i3++)
							{
								C[i2]-=A[B[i2]][i3]*C[i3];
								if(count)
								{
									COUNT++;
								}
							}
							C[i2]/=A[B[i2]][i2];
							if(count)
							{
								COUNT++;
							}
						}
						if(!VerificationC(N))
						{
							return false;
						}
						for(i2=0;i2<N;i2++)
						{
							AA[B[i2]][B[i1]]=C[B[i2]];
						}
					}
					for(i1=0;i1<N;i1++)
					{
						for(i2=0;i2<N;i2++)
						{
							A[i1][i2]=AA[i1][i2];
						}
					}
					return true;
				}
				//обращение матрицы A вторым способом
				bool bReverseASecond(bool count)
				{
					double AA[size][size];
					int i1,i2,i3;
					//
					for(i1=0;i1<N;i1++)
					{
						A[B[i1]][i1]=1/A[B[i1]][i1];
						if(count)
						{
							COUNT++;
						}
					}
					for(i1=0;i1<N;i1++)
					{
						for(i2=0;i2<i1;i2++)
						{
							A[B[i1]][i2]*=-A[B[i2]][i2];
							if(count)
							{
								COUNT++;
								COUNT++;
							}
						}
					}
					for(i1=0;i1<N;i1++)
					{
						for(i2=i1+1;i2<N;i2++)
						{
							A[B[i1]][i2]*=-1;
							if(count)
							{
								COUNT++;
							}
						}
					}
					//
					for(i1=0;i1<N-1;i1++)
					{
						for(i2=i1+1;i2<N;i2++)
						{
							for(i3=0;i3<=i1;i3++)
							{
								C[i3]=A[B[i2]][i3];
								if(i2==i1+1)
								{
									C[i3]*=A[B[i2]][i2];
									if(count)
									{
										COUNT++;
									}
								}
								else
								{
									C[i3]+=A[B[i2]][i1+1]*A[B[i1+1]][i3];
									if(count)
									{
										COUNT++;
									}
								}
							}
							for(i3=0;i3<=i1;i3++)
							{
								AA[i2][i3]=C[i3];
							}
						}
						for(i2=i1+1;i2<N;i2++)
						{
							for(i3=0;i3<=i1;i3++)
							{
								A[B[i2]][i3]=AA[i2][i3];
							}
						}
					}
					//
					for(i1=0;i1<N-2;i1++)
					{
						for(i2=0;i2<N-2-i1;i2++)
						{
							for(i3=N-1-i1;i3<N;i3++)
							{
								C[i3]=A[B[i2]][i3];
								C[i3]+=A[B[i2]][N-2-i1]*A[B[N-2-i1]][i3];
								if(count)
								{
									COUNT++;
								}
							}
							for(i3=N-1-i1;i3<N;i3++)
							{
								AA[i2][i3]=C[i3];
							}
						}
						for(i2=0;i2<N-2-i1;i2++)
						{
							for(i3=N-1-i1;i3<N;i3++)
							{
								A[B[i2]][i3]=AA[i2][i3];
							}
						}
					}
					//
					for(i1=0;i1<N;i1++)
					{
						for(i2=0;i2<N;i2++)
						{
							AA[i1][B[i2]]=0;
							if(i2<=i1)
							{
								AA[i1][B[i2]]=A[B[i1]][i2];
							}
							for(i3=0;i3<=Math::Min(i1,i2-1);i3++)
							{
								AA[i1][B[i2]]+=A[B[i1]][i3]*A[B[i3]][i2];
								if(count)
								{
									COUNT++;
								}
							}
						}
					}
					for(i1=0;i1<N;i1++)
					{
						for(i2=0;i2<N;i2++)
						{
							A[i1][i2]=AA[i1][i2];
						}
					}
					if(!VerificationA(N))
					{
						return false;
					}
					return true;
				}
				//построение таблиц
				bool Table1()
				{
					int i1;
					double max;
					ofstream ofs;
					DateTime DT1,DT2;
					TimeSpan TS1;
					_table_1a->Text="порядок\n";
					_table_1b->Text="время\n";
					_table_1c->Text="точность\n";
					_table_1d->Text="реальное ч.о.\n";
					_table_1e->Text="теорет.ч.о.\n";
					for(N=5;N<=100;N+=5)
					{
						_table_1a->Text+=N.ToString()+"\n";
						COUNT=0;
						NormalizeB(N);
						ClearD(N);
						ClearC(N);
						if(!CreateMatrix(11,1))
						{
							return false;
						}
						DT1=DateTime::Now;
						if(!CreateC())
						{
							return false;
						}
						if(_methods_LU_1->Checked)
						{
							if(!aAToLU(false,true))
							{
								return false;
							}
							if(!aSolveSystem(true))
							{
								return false;
							}
						}
						if(_methods_LU_2->Checked)
						{
							if(!bAToLU(false,true))
							{
								return false;
							}
							if(!bSolveSystem(true))
							{
								return false;
							}
						}
						if(!VerificationC(N))
						{
							return false;
						}
						DT2=DateTime::Now;
						TS1=DT2-DT1;
						_table_1b->Text+=((float)(TS1.TotalSeconds)).ToString()+"\n";
						max=0;
						for(i1=0;i1<N;i1++)
						{
							if(Math::Abs(C[i1]-i1-1)>max)
							{
								max=Math::Abs(C[i1]-i1-1);
							}
						}
						_table_1c->Text+=((float)max).ToString()+"\n";
						_table_1d->Text+=COUNT.ToString()+"\n";
						_table_1e->Text+=((N*N*N)/3).ToString()+"\n";
						ofs.open("TableOne.txt");
						if(!ofs)
						{
							ERROR("Невозможно создать файл TableOne.txt");
							return false;
						}
						for(i1=8;i1<_table_1a->Text->Length;i1++)
						{
							if((char)(_table_1a->Text[i1])==',')
							{
								ofs << '.';
							}
							else
							{
								ofs << (char)(_table_1a->Text[i1]);
							}
						}
						for(i1=6;i1<_table_1b->Text->Length;i1++)
						{
							if((char)(_table_1b->Text[i1])==',')
							{
								ofs << '.';
							}
							else
							{
								ofs << (char)(_table_1b->Text[i1]);
							}
						}
						for(i1=9;i1<_table_1c->Text->Length;i1++)
						{
							if((char)(_table_1c->Text[i1])==',')
							{
								ofs << '.';
							}
							else
							{
								ofs << (char)(_table_1c->Text[i1]);
							}
						}
						for(i1=14;i1<_table_1d->Text->Length;i1++)
						{
							if((char)(_table_1d->Text[i1])==',')
							{
								ofs << '.';
							}
							else
							{
								ofs << (char)(_table_1d->Text[i1]);
							}
						}
						for(i1=12;i1<_table_1e->Text->Length;i1++)
						{
							if((char)(_table_1e->Text[i1])==',')
							{
								ofs << '.';
							}
							else
							{
								ofs << (char)(_table_1e->Text[i1]);
							}
						}
						ofs.close();
					}
					return true;
				}
				bool Table2()
				{
					int i1;
					double max;
					DateTime DT1,DT2;
					TimeSpan TS1;
					_table_2a->Text="порядок\n";
					_table_2b->Text="время\n";
					_table_2c->Text="точность\n";
					_table_2d->Text="реальное ч.о.\n";
					_table_2e->Text="теорет.ч.о.\n";
					for(N=4;N<=40;N+=4)
					{
						_table_2a->Text+=N.ToString()+"\n";
						COUNT=0;
						NormalizeB(N);
						ClearD(N);
						ClearC(N);
						if(!CreateMatrix(Decimal::ToInt32(_number->Value),Decimal::ToDouble(_attribute->Value)))
						{
							return false;
						}
						DT1=DateTime::Now;
						if(!CreateC())
						{
							return false;
						}
						if(_methods_LU_1->Checked)
						{
							if(!aAToLU(false,true))
							{
								return false;
							}
							if(!aSolveSystem(true))
							{
								return false;
							}
						}
						if(_methods_LU_2->Checked)
						{
							if(!bAToLU(false,true))
							{
								return false;
							}
							if(!bSolveSystem(true))
							{
								return false;
							}
						}
						if(!VerificationC(N))
						{
							return false;
						}
						DT2=DateTime::Now;
						TS1=DT2-DT1;
						_table_2b->Text+=((float)(TS1.TotalSeconds)).ToString()+"\n";
						max=0;
						for(i1=0;i1<N;i1++)
						{
							if(Math::Abs(C[i1]-i1-1)>max)
							{
								max=Math::Abs(C[i1]-i1-1);
							}
						}
						_table_2c->Text+=((float)max).ToString()+"\n";
						_table_2d->Text+=COUNT.ToString()+"\n";
						_table_2e->Text+=((N*N*N)/3).ToString()+"\n";
					}
					return true;
				}
				bool Table3()
				{
					double AA[size][size];
					int i1,i2,i3;
					double max1,max2;
					double d1,d2;
					DateTime DT1,DT2;
					TimeSpan TS1;
					ofstream ofs;
					_table_3a->Text="порядок\n";
					_table_3b->Text="время 1сп\n";
					_table_3c->Text="время 2сп\n";
					_table_3d->Text="точность 1сп\n";
					_table_3e->Text="точность 2сп\n";
					_table_3f->Text="реал.ч.о. 1сп\n";
					_table_3g->Text="реал.ч.о. 2сп\n";
					_table_3h->Text="теорет.ч.о.\n";
					for(N=5;N<=100;N+=5)
					{
						_table_3a->Text+=N.ToString()+"\n";
						_table_3h->Text+=(N*N*N).ToString()+"\n";
					}
					for(N=5;N<=100;N+=5)
					{
						COUNT=0;
						NormalizeB(N);
						if(!CreateMatrix(11,1))
						{
							return false;
						}
						for(i1=0;i1<N;i1++)
						{
							for(i2=0;i2<N;i2++)
							{
								AA[i1][i2]=A[i1][i2];
							}
						}
						DT1=DateTime::Now;
						if(_methods_LU_1->Checked)
						{
							if(!aAToLU(false,true))
							{
								return false;
							}
							if(!aReverseAFirst(true))
							{
								return false;
							}
						}
						if(_methods_LU_2->Checked)
						{
							if(!bAToLU(false,true))
							{
								return false;
							}
							if(!bReverseAFirst(true))
							{
								return false;
							}
						}
						DT2=DateTime::Now;
						TS1=DT2-DT1;
						_table_3b->Text+=((float)(TS1.TotalSeconds)).ToString()+"\n";
						_table_3f->Text+=COUNT.ToString()+"\n";
						for(i1=0;i1<N;i1++)
						{
							A[i1][i1]--;
						}
						max1=0;
						for(i1=0;i1<N;i1++)
						{
							max2=0;
							for(i2=0;i2<N;i2++)
							{
								if(max2<Math::Abs(A[i1][i2]))
								{
									max2=Math::Abs(A[i1][i2]);
								}
							}
							if(max1<max2)
							{
								max1=max2;
							}
						}
						d1=max2;
						for(i1=0;i1<N;i1++)
						{
							A[i1][i1]++;
						}
						max1=0;
						for(i1=0;i1<N;i1++)
						{
							max2=0;
							for(i2=0;i2<N;i2++)
							{
								C[i2]=0;
								for(i3=0;i3<N;i3++)
								{
									C[i2]+=AA[i1][i3]*A[i3][i2];
								}
							}
							if(!VerificationC(N))
							{
								return false;
							}
							C[i1]--;
							for(i2=0;i2<N;i2++)
							{
								if(max2<Math::Abs(C[i2]))
								{
									max2=Math::Abs(C[i2]);
								}
							}
							if(max1<max2)
							{
								max1=max2;
							}
						}
						d2=max2;
						_table_3d->Text+=((float)(d1*d2)).ToString()+"\n";
					}
					for(N=5;N<=100;N+=5)
					{
						COUNT=0;
						NormalizeB(N);
						if(!CreateMatrix(11,0.0001))
						{
							return false;
						}
						for(i1=0;i1<N;i1++)
						{
							for(i2=0;i2<N;i2++)
							{
								AA[i1][i2]=A[i1][i2];
							}
						}
						DT1=DateTime::Now;
						if(_methods_LU_1->Checked)
						{
							if(!aAToLU(false,true))
							{
								return false;
							}
							if(!aReverseASecond(true))
							{
								return false;
							}
						}
						if(_methods_LU_2->Checked)
						{
							if(!bAToLU(false,true))
							{
								return false;
							}
							if(!bReverseASecond(true))
							{
								return false;
							}
						}
						DT2=DateTime::Now;
						TS1=DT2-DT1;
						_table_3c->Text+=((float)(TS1.TotalSeconds)).ToString()+"\n";
						_table_3g->Text+=COUNT.ToString()+"\n";
						for(i1=0;i1<N;i1++)
						{
							A[i1][i1]--;
						}
						max1=0;
						for(i1=0;i1<N;i1++)
						{
							max2=0;
							for(i2=0;i2<N;i2++)
							{
								if(max2<Math::Abs(A[i1][i2]))
								{
									max2=Math::Abs(A[i1][i2]);
								}
							}
							if(max1<max2)
							{
								max1=max2;
							}
						}
						d1=max2;
						for(i1=0;i1<N;i1++)
						{
							A[i1][i1]++;
						}
						max1=0;
						for(i1=0;i1<N;i1++)
						{
							max2=0;
							for(i2=0;i2<N;i2++)
							{
								C[i2]=0;
								for(i3=0;i3<N;i3++)
								{
									C[i2]+=AA[i1][i3]*A[i3][i2];
								}
							}
							if(!VerificationC(N))
							{
								return false;
							}
							C[i1]--;
							for(i2=0;i2<N;i2++)
							{
								if(max2<Math::Abs(C[i2]))
								{
									max2=Math::Abs(C[i2]);
								}
							}
							if(max1<max2)
							{
								max1=max2;
							}
						}
						d2=max2;
						_table_3e->Text+=((float)(d1*d2)).ToString()+"\n";
					}
					ofs.open("TableThree.txt");
					if(!ofs)
					{
						ERROR("Невозможно создать файл TableThree.txt");
						return false;
					}
					for(i1=8;i1<_table_3a->Text->Length;i1++)
					{
						if((char)(_table_3a->Text[i1])==',')
						{
							ofs << '.';
						}
						else
						{
							ofs << (char)(_table_3a->Text[i1]);
						}
					}
					for(i1=10;i1<_table_3b->Text->Length;i1++)
					{
						if((char)(_table_3b->Text[i1])==',')
						{
							ofs << '.';
						}
						else
						{
							ofs << (char)(_table_3b->Text[i1]);
						}
					}
					for(i1=10;i1<_table_3c->Text->Length;i1++)
					{
						if((char)(_table_3c->Text[i1])==',')
						{
							ofs << '.';
						}
						else
						{
							ofs << (char)(_table_3c->Text[i1]);
						}
					}
					for(i1=13;i1<_table_3d->Text->Length;i1++)
					{
						if((char)(_table_3d->Text[i1])==',')
						{
							ofs << '.';
						}
						else
						{
							ofs << (char)(_table_3d->Text[i1]);
						}
					}
					for(i1=13;i1<_table_3e->Text->Length;i1++)
					{
						if((char)(_table_3e->Text[i1])==',')
						{
							ofs << '.';
						}
						else
						{
							ofs << (char)(_table_3e->Text[i1]);
						}
					}
					for(i1=14;i1<_table_3f->Text->Length;i1++)
					{
						if((char)(_table_3f->Text[i1])==',')
						{
							ofs << '.';
						}
						else
						{
							ofs << (char)(_table_3f->Text[i1]);
						}
					}
					for(i1=14;i1<_table_3g->Text->Length;i1++)
					{
						if((char)(_table_3g->Text[i1])==',')
						{
							ofs << '.';
						}
						else
						{
							ofs << (char)(_table_3g->Text[i1]);
						}
					}
					for(i1=12;i1<_table_3h->Text->Length;i1++)
					{
						if((char)(_table_3h->Text[i1])==',')
						{
							ofs << '.';
						}
						else
						{
							ofs << (char)(_table_3h->Text[i1]);
						}
					}
					ofs.close();
					return true;
				}
				//
				bool Chart1()
				{
					int i1;
					double d1,max;
					ifstream ifs;
					ifs.open("TableOne.txt");
					if(!ifs)
					{
						ERROR("Невозможно открыть файл TableOne.txt");
						return false;
					}
					System::Drawing::Pen^ pen1=gcnew System::Drawing::Pen(_color_1->BackColor);
					System::Drawing::Pen^ pen2=gcnew System::Drawing::Pen(_color_2->BackColor);
					System::Drawing::Graphics^ chart;
					chart = _field->CreateGraphics();
					chart->Clear(Color::White);
					for(i1=0;i1<60;i1++)
					{
						ifs >> d1;
					}
					for(i1=0;i1<40;i1++)
					{
						ifs >> C[i1];
					}
					ifs.close();
					max=C[0];
					for(i1=1;i1<40;i1++)
					{
						if(max<C[i1])
						{
							max=C[i1];
						}
					}
					_max_value->Text=((float)(max)).ToString();
					for(i1=0;i1<40;i1++)
					{
						C[i1]=_field->Size.Height*(1-(C[i1]/max));
					}
					if(!VerificationC(40))
					{
						return false;
					}
					chart->DrawLine(pen1, 0, _field->Size.Width, 0, (int)C[0]);
					for(i1=1;i1<20;i1++)
					{
						chart->DrawLine(pen1, (_field->Size.Width/19)*(i1-1), (int)C[i1-1], (_field->Size.Width/19)*i1, (int)C[i1]);
					}
					chart->DrawLine(pen2, 0, _field->Size.Width, 0, (int)C[20]);
					for(i1=21;i1<40;i1++)
					{
						chart->DrawLine(pen2, (_field->Size.Width/19)*(i1-21), (int)C[i1-1], (_field->Size.Width/19)*(i1-20), (int)C[i1]);
					}
					return true;
				}
				bool Chart2()
				{
					int i1;
					double d1,max;
					ifstream ifs;
					ifs.open("TableOne.txt");
					if(!ifs)
					{
						ERROR("Невозможно открыть файл TableOne.txt");
						return false;
					}
					System::Drawing::Pen^ pen1=gcnew System::Drawing::Pen(_color_1->BackColor);
					System::Drawing::Pen^ pen2=gcnew System::Drawing::Pen(_color_2->BackColor);
					System::Drawing::Graphics^ chart;
					chart = _field->CreateGraphics();
					chart->Clear(Color::White);
					for(i1=0;i1<20;i1++)
					{
						ifs >> d1;
					}
					for(i1=0;i1<20;i1++)
					{
						ifs >> C[i1];
					}
					ifs.close();
					max=C[0];
					for(i1=1;i1<20;i1++)
					{
						if(max<C[i1])
						{
							max=C[i1];
						}
					}
					_max_value->Text=((float)(max)).ToString();
					for(i1=0;i1<20;i1++)
					{
						C[i1]=_field->Size.Height*(1-(C[i1]/max));
					}
					if(!VerificationC(20))
					{
						return false;
					}
					chart->DrawLine(pen1, 0, _field->Size.Width, 0, (int)C[0]);
					for(i1=1;i1<20;i1++)
					{
						chart->DrawLine(pen1, (_field->Size.Width/19)*(i1-1), (int)C[i1-1], (_field->Size.Width/19)*i1, (int)C[i1]);
					}
					return true;
				}
				bool Chart3()
				{
					int i1;
					double d1,max;
					ifstream ifs;
					ifs.open("TableOne.txt");
					if(!ifs)
					{
						ERROR("Невозможно открыть файл TableOne.txt");
						return false;
					}
					System::Drawing::Pen^ pen1=gcnew System::Drawing::Pen(_color_1->BackColor);
					System::Drawing::Pen^ pen2=gcnew System::Drawing::Pen(_color_2->BackColor);
					System::Drawing::Graphics^ chart;
					chart = _field->CreateGraphics();
					chart->Clear(Color::White);
					for(i1=0;i1<40;i1++)
					{
						ifs >> d1;
					}
					for(i1=0;i1<20;i1++)
					{
						ifs >> C[i1];
					}
					ifs.close();
					max=C[0];
					for(i1=1;i1<20;i1++)
					{
						if(max<C[i1])
						{
							max=C[i1];
						}
					}
					_max_value->Text=((float)(max)).ToString();
					for(i1=0;i1<20;i1++)
					{
						C[i1]=_field->Size.Height*(1-(C[i1]/max));
					}
					if(!VerificationC(20))
					{
						return false;
					}
					chart->DrawLine(pen1, 0, _field->Size.Width, 0, (int)C[0]);
					for(i1=1;i1<20;i1++)
					{
						chart->DrawLine(pen1, (_field->Size.Width/19)*(i1-1), (int)C[i1-1], (_field->Size.Width/19)*i1, (int)C[i1]);
					}
					return true;
				}
				bool Chart4()
				{
					int i1;
					double d1,max;
					ifstream ifs;
					ifs.open("TableThree.txt");
					if(!ifs)
					{
						ERROR("Невозможно открыть файл TableThree.txt");
						return false;
					}
					System::Drawing::Pen^ pen1=gcnew System::Drawing::Pen(_color_1->BackColor);
					System::Drawing::Pen^ pen2=gcnew System::Drawing::Pen(_color_2->BackColor);
					System::Drawing::Pen^ pen3=gcnew System::Drawing::Pen(_color_3->BackColor);
					System::Drawing::Graphics^ chart;
					chart = _field->CreateGraphics();
					chart->Clear(Color::White);
					for(i1=0;i1<100;i1++)
					{
						ifs >> d1;
					}
					for(i1=0;i1<60;i1++)
					{
						ifs >> C[i1];
					}
					ifs.close();
					max=C[0];
					for(i1=1;i1<60;i1++)
					{
						if(max<C[i1])
						{
							max=C[i1];
						}
					}
					_max_value->Text=((float)(max)).ToString();
					for(i1=0;i1<60;i1++)
					{
						C[i1]=_field->Size.Height*(1-(C[i1]/max));
					}
					if(!VerificationC(60))
					{
						return false;
					}
					chart->DrawLine(pen1, 0, _field->Size.Width, 0, (int)C[0]);
					for(i1=1;i1<20;i1++)
					{
						chart->DrawLine(pen1, (_field->Size.Width/19)*(i1-1), (int)C[i1-1], (_field->Size.Width/19)*i1, (int)C[i1]);
					}
					chart->DrawLine(pen2, 0, _field->Size.Width, 0, (int)C[20]);
					for(i1=21;i1<40;i1++)
					{
						chart->DrawLine(pen2, (_field->Size.Width/19)*(i1-21), (int)C[i1-1], (_field->Size.Width/19)*(i1-20), (int)C[i1]);
					}
					chart->DrawLine(pen3, 0, _field->Size.Width, 0, (int)C[20]);
					for(i1=41;i1<60;i1++)
					{
						chart->DrawLine(pen3, (_field->Size.Width/19)*(i1-41), (int)C[i1-1], (_field->Size.Width/19)*(i1-40), (int)C[i1]);
					}
					return true;
				}
				bool Chart5()
				{
					int i1;
					double d1,max;
					ifstream ifs;
					ifs.open("TableThree.txt");
					if(!ifs)
					{
						ERROR("Невозможно открыть файл TableThree.txt");
						return false;
					}
					System::Drawing::Pen^ pen1=gcnew System::Drawing::Pen(_color_1->BackColor);
					System::Drawing::Pen^ pen2=gcnew System::Drawing::Pen(_color_2->BackColor);
					System::Drawing::Graphics^ chart;
					chart = _field->CreateGraphics();
					chart->Clear(Color::White);
					for(i1=0;i1<20;i1++)
					{
						ifs >> d1;
					}
					for(i1=0;i1<40;i1++)
					{
						ifs >> C[i1];
					}
					ifs.close();
					max=C[0];
					for(i1=1;i1<40;i1++)
					{
						if(max<C[i1])
						{
							max=C[i1];
						}
					}
					_max_value->Text=((float)(max)).ToString();
					for(i1=0;i1<40;i1++)
					{
						C[i1]=_field->Size.Height*(1-(C[i1]/max));
					}
					if(!VerificationC(40))
					{
						return false;
					}
					chart->DrawLine(pen1, 0, _field->Size.Width, 0, (int)C[0]);
					for(i1=1;i1<20;i1++)
					{
						chart->DrawLine(pen1, (_field->Size.Width/19)*(i1-1), (int)C[i1-1], (_field->Size.Width/19)*i1, (int)C[i1]);
					}
					chart->DrawLine(pen2, 0, _field->Size.Width, 0, (int)C[20]);
					for(i1=21;i1<40;i1++)
					{
						chart->DrawLine(pen2, (_field->Size.Width/19)*(i1-21), (int)C[i1-1], (_field->Size.Width/19)*(i1-20), (int)C[i1]);
					}
					return true;
				}
				bool Chart6()
				{
					int i1;
					double d1,max;
					ifstream ifs;
					ifs.open("TableThree.txt");
					if(!ifs)
					{
						ERROR("Невозможно открыть файл TableThree.txt");
						return false;
					}
					System::Drawing::Pen^ pen1=gcnew System::Drawing::Pen(_color_1->BackColor);
					System::Drawing::Pen^ pen2=gcnew System::Drawing::Pen(_color_2->BackColor);
					System::Drawing::Graphics^ chart;
					chart = _field->CreateGraphics();
					chart->Clear(Color::White);
					for(i1=0;i1<60;i1++)
					{
						ifs >> d1;
					}
					for(i1=0;i1<40;i1++)
					{
						ifs >> C[i1];
					}
					ifs.close();
					max=C[0];
					for(i1=1;i1<40;i1++)
					{
						if(max<C[i1])
						{
							max=C[i1];
						}
					}
					_max_value->Text=((float)(max)).ToString();
					for(i1=0;i1<40;i1++)
					{
						C[i1]=_field->Size.Height*(1-(C[i1]/max));
					}
					if(!VerificationC(40))
					{
						return false;
					}
					chart->DrawLine(pen1, 0, _field->Size.Width, 0, (int)C[0]);
					for(i1=1;i1<20;i1++)
					{
						chart->DrawLine(pen1, (_field->Size.Width/19)*(i1-1), (int)C[i1-1], (_field->Size.Width/19)*i1, (int)C[i1]);
					}
					chart->DrawLine(pen2, 0, _field->Size.Width, 0, (int)C[20]);
					for(i1=21;i1<40;i1++)
					{
						chart->DrawLine(pen2, (_field->Size.Width/19)*(i1-21), (int)C[i1-1], (_field->Size.Width/19)*(i1-20), (int)C[i1]);
					}
					return true;
				}
				//
	private: System::Void _type_ValueChanged(System::Object^ sender, System::EventArgs^ e){
					switch(Decimal::ToInt32(_type->Value))
					{
					case 1:
						_rank->Enabled=true;
						_value->Enabled=false;
						break;
					case 2:
						_rank->Enabled=false;
						_value->Enabled=false;
						break;
					case 3:
						_rank->Enabled=false;
						_value->Enabled=false;
						break;
					case 4:
						_rank->Enabled=true;
						_value->Enabled=false;
						break;
					case 5:
						_rank->Enabled=true;
						_value->Enabled=false;
						break;
					case 6:
						_rank->Enabled=false;
						_value->Enabled=true;
						break;
					case 7:
						_rank->Enabled=true;
						_value->Enabled=true;
						break;
					case 8:
						_rank->Enabled=true;
						_value->Enabled=true;
						break;
					case 9:
						_rank->Enabled=true;
						_value->Enabled=true;
						break;
					case 10:
						_rank->Enabled=false;
						_value->Enabled=false;
						break;
					case 11:
						_rank->Enabled=true;
						_value->Enabled=false;
						break;
					}
				}
	private: System::Void _accept_Click(System::Object^ sender, System::EventArgs^ e){
					this->Cursor->Current=Cursors::WaitCursor;
					N=Decimal::ToInt32(_rank->Value);
					if(!CreateMatrix(Decimal::ToInt32(_type->Value),Decimal::ToInt32(_value->Value)))
					{
						return;
					}
					_matrix_input->Text="";
					OutA(_matrix_input,false);
					this->Cursor->Current=Cursors::Default;
				}
	private: System::Void _solve_Click(System::Object^ sender, System::EventArgs^ e){
					DateTime DT1,DT2;
					TimeSpan TS1;
					this->Cursor->Current=Cursors::WaitCursor;
					DT1=DateTime::Now;
					if(!InA(_matrix_input))
					{
						_text_progress->Text="Прервано";
						_matrix_output->Text="";
						return;
					}
					if(_auto_clear->Checked)
					{
						_line_1->Text="";
					}
					if(_line_1->Text=="")
					{
						if(!CreateC())
						{
							_text_progress->Text="Прервано";
							_matrix_output->Text="";
							return;
						}
						_line_1->Text="";
						OutC(_line_1,false);
					}
					//LU разложение
					_text_progress->Text="LU Разложение";
					Application::DoEvents();
					NormalizeB(size);
					ClearC(size);
					ClearD(size);
					_matrix_output->Text="A\n";
					OutA(_matrix_output,false);
					if(_methods_LU_1->Checked)
					{
						if(!aAToLU(true,false))
						{
							_text_progress->Text="Прервано";
							_matrix_output->Text="";
							return;
						}
					}
					if(_methods_LU_2->Checked)
					{
						if(!bAToLU(true,false))
						{
							_text_progress->Text="Прервано";
							_matrix_output->Text="";
							return;
						}
					}
					//вычисление определителя
					_text_progress->Text="Вычисление Определителя";
					Application::DoEvents();
					if(!LUDet())
					{
						_text_progress->Text="Прервано";
						_matrix_output->Text="";
						return;
					}
					_det->Text=DET.ToString();
					//решение СЛУ
					_text_progress->Text="Решение СЛУ";
					Application::DoEvents();
					if(!InC(_line_1))
					{
						_text_progress->Text="Прервано";
						_matrix_output->Text="";
						return;
					}
					if(_methods_LU_1->Checked)
					{
						if(!aSolveSystem(false))
						{
							_text_progress->Text="Прервано";
							_matrix_output->Text="";
							return;
						}
						_line_2->Text="";
						OutC(_line_2,false);
					}
					if(_methods_LU_2->Checked)
					{
						if(!bSolveSystem(false))
						{
							_text_progress->Text="Прервано";
							_matrix_output->Text="";
							return;
						}
						_line_2->Text="";
						OutC(_line_2,false);
					}
					//обратная матрица
					_text_progress->Text="Обращение матрицы";
					Application::DoEvents();
					if(_methods_LU_1->Checked)
					{
						if(_methods_reverse_1->Checked)
						{
							if(!aReverseAFirst(false))
							{
								_text_progress->Text="Прервано";
								_matrix_output->Text="";
								return;
							}
							_matrix_output->Text+="A-1 первый способ\n";
							OutA(_matrix_output,false);
						}
						if(_methods_reverse_2->Checked)
						{
							if(!aReverseASecond(false))
							{
								_text_progress->Text="Прервано";
								_matrix_output->Text="";
								return;
							}
							_matrix_output->Text+="A-1 второй способ\n";
							OutA(_matrix_output,false);
						}
					}
					if(_methods_LU_2->Checked)
					{
						if(_methods_reverse_1->Checked)
						{
							if(!bReverseAFirst(false))
							{
								_text_progress->Text="Прервано";
								_matrix_output->Text="";
								return;
							}
							_matrix_output->Text+="A-1 первый способ\n";
							OutA(_matrix_output,false);
						}
						if(_methods_reverse_2->Checked)
						{
							if(!bReverseASecond(false))
							{
								_text_progress->Text="Прервано";
								_matrix_output->Text="";
								return;
							}
							_matrix_output->Text+="A-1 второй способ\n";
							OutA(_matrix_output,false);
						}
					}
					_text_progress->Text="Завершено";
					DT2=DateTime::Now;
					TS1=DT2-DT1;
					_time_progress->Text=TS1.TotalSeconds.ToString();
					this->Cursor->Current=Cursors::Default;
					INFO("Задачи выполнены успешно");
				}
	private: System::Void _clear_Click(System::Object^ sender, System::EventArgs^ e){
					_matrix_input->Text="";
					_line_1->Text="";
				}
	private: System::Void _example_1_Click(System::Object^ sender, System::EventArgs^ e){
					_matrix_input->Text="81 64 49\n36 25 16\n9 4 1\n";
					_line_1->Text="100 34 4 ";
					N=3;
				}
	private: System::Void _example_2_Click(System::Object^ sender, System::EventArgs^ e){
					_matrix_input->Text="2 4 -4 6\n1 4 2 1\n3 8 1 1\n2 5 0 5\n";
					_line_1->Text="42 5 14 28 ";
					N=4;
				}
	private: System::Void _example_3_Click(System::Object^ sender, System::EventArgs^ e){
					_matrix_input->Text="-54 -25 57 17 36\n-85 -12 -36 -29 58\n97 -65 33 77 51\n57 12 74 -100 24\n4 -72 35 -94 -48\n";
					_line_1->Text="279 237 273 775 389 ";
					N=5;
				}
	private: System::Void _number_ValueChanged(System::Object^ sender, System::EventArgs^ e){
					switch(Decimal::ToInt32(_number->Value))
					{
					case 1:
						_create->Enabled=true;
						_attribute->Enabled=false;
						break;
					case 2:
						_create->Enabled=false;
						_attribute->Enabled=false;
						break;
					case 3:
						_create->Enabled=false;
						_attribute->Enabled=false;
						break;
					case 4:
						_create->Enabled=true;
						_attribute->Enabled=false;
						break;
					case 5:
						_create->Enabled=true;
						_attribute->Enabled=false;
						break;
					case 6:
						_create->Enabled=false;
						_attribute->Enabled=true;
						break;
					case 7:
						_create->Enabled=true;
						_attribute->Enabled=true;
						break;
					case 8:
						_create->Enabled=true;
						_attribute->Enabled=true;
						break;
					case 9:
						_create->Enabled=true;
						_attribute->Enabled=true;
						break;
					case 10:
						_create->Enabled=false;
						_attribute->Enabled=true;
						break;
					case 11:
						_create->Enabled=true;
						_attribute->Enabled=true;
						break;
					}
				}
	private: System::Void _create_Click(System::Object^ sender, System::EventArgs^ e){
					bool b1;
					b1=true;
					this->Cursor->Current=Cursors::WaitCursor;
					if(_create_table_1->Checked)
					{
						if(!Table1())
						{
							_table_1a->Text="";
							_table_1b->Text="";
							_table_1c->Text="";
							_table_1d->Text="";
							_table_1e->Text="";
							WARNING("В первой таблице обнаружена ошибка");
							b1=false;
						}
					}
					if(_create_table_2->Checked)
					{
						if(!Table2())
						{
							_table_2a->Text="";
							_table_2b->Text="";
							_table_2c->Text="";
							_table_2d->Text="";
							_table_2e->Text="";
							WARNING("Во второй таблице обнаружена ошибка");
							b1=false;
						}
					}
					if(_create_table_3->Checked)
					{
						if(!Table3())
						{
							_table_3a->Text="";
							_table_3b->Text="";
							_table_3c->Text="";
							_table_3d->Text="";
							_table_3e->Text="";
							_table_3f->Text="";
							_table_3g->Text="";
							WARNING("В третьей таблице обнаружена ошибка");
							b1=false;
						}
					}
					this->Cursor->Current=Cursors::Default;
					if(_create_table_1->Checked || _create_table_2->Checked || _create_table_3->Checked)
					{
						if(b1==true)
						{
							INFO("Таблицы построены успешно");
						}
					}
				}
	private: System::Void _n_ValueChanged(System::Object^ sender, System::EventArgs^ e){
					bool b1;
					switch(Decimal::ToInt32(_n->Value))
					{
					case 1:
						_description->Text="Зависимость реального и оценочного числа операций от порядка матрицы";
						_color_1->Visible=true;
						_text_color_1->Visible=true;
						_color_2->Visible=true;
						_text_color_2->Visible=true;
						_color_3->Visible=false;
						_text_color_3->Visible=false;
						_text_color_1->Text="Реальное Ч.О.";
						_text_color_2->Text="Теорет.Ч.О.";
						if(_auto_build->Checked)
						{
							b1=Chart1();
						}
						break;
					case 2:
						_description->Text="Зависимость времени решения от порядка матрицы";
						_color_1->Visible=true;
						_text_color_1->Visible=true;
						_color_2->Visible=false;
						_text_color_2->Visible=false;
						_color_3->Visible=false;
						_text_color_3->Visible=false;
						_text_color_1->Text="Время";
						if(_auto_build->Checked)
						{
							b1=Chart2();
						}
						break;
					case 3:
						_description->Text="Зависимость точности решения от порядка матрицы";
						_color_1->Visible=true;
						_text_color_1->Visible=true;
						_color_2->Visible=false;
						_text_color_2->Visible=false;
						_color_3->Visible=false;
						_text_color_3->Visible=false;
						_text_color_1->Text="Точность";
						if(_auto_build->Checked)
						{
							b1=Chart3();
						}
						break;
					case 4:
						_description->Text="Зависимость реального и оценочного числа операций от порядка матрицы";
						_color_1->Visible=true;
						_text_color_1->Visible=true;
						_color_2->Visible=true;
						_text_color_2->Visible=true;
						_color_3->Visible=true;
						_text_color_3->Visible=true;
						_text_color_1->Text="Реал.Ч.О. 1Сп";
						_text_color_2->Text="Реал.Ч.О. 2Сп";
						_text_color_3->Text="Теорет.Ч.О.";
						if(_auto_build->Checked)
						{
							b1=Chart4();
						}
						break;
					case 5:
						_description->Text="Зависимость времени обращения первым и вторым способами от порядка матрицы";
						_color_1->Visible=true;
						_text_color_1->Visible=true;
						_color_2->Visible=true;
						_text_color_2->Visible=true;
						_color_3->Visible=false;
						_text_color_3->Visible=false;
						_text_color_1->Text="Время 1Сп";
						_text_color_2->Text="Время 2Сп";
						if(_auto_build->Checked)
						{
							b1=Chart5();
						}
						break;
					case 6:
						_description->Text="Зависимость точности обращения первым и вторым способами от порядка матрицы";
						_color_1->Visible=true;
						_text_color_1->Visible=true;
						_color_2->Visible=true;
						_text_color_2->Visible=true;
						_color_3->Visible=false;
						_text_color_3->Visible=false;
						_text_color_1->Text="Точность 1Сп";
						_text_color_2->Text="Точность 2Сп";
						if(_auto_build->Checked)
						{
							b1=Chart6();
						}
						break;
					}
					if(_auto_build->Checked)
					{
						if(b1==false)
						{
							WARNING("В графике обнаружена ошибка");
						}
					}
				}
	private: System::Void _build_Click(System::Object^ sender, System::EventArgs^ e){
					bool b1;
					switch(Decimal::ToInt32(_n->Value))
					{
					case 1:
						b1=Chart1();
						break;
					case 2:
						b1=Chart2();
						break;
					case 3:
						b1=Chart3();
						break;
					case 4:
						b1=Chart4();
						break;
					case 5:
						b1=Chart5();
						break;
					case 6:
						b1=Chart6();
						break;
					}
					if(b1==false)
					{
						WARNING("В графике обнаружена ошибка");
					}
				}
	private: System::Void _methods_LU_1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
					if(_methods_LU_1->Checked)
					{
						Form1::Text="МЕТОД ПЕРВЫЙ";
					}
				}
	private: System::Void _methods_LU_2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
					if(_methods_LU_2->Checked)
					{
						Form1::Text="МЕТОД ВТОРОЙ";
					}
				}
	private: System::Void _create_table_2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
					if(_create_table_2->Checked)
					{
						_number->Value=1;
						_attribute->Value=1;
					}
					_number->Visible=_create_table_2->Checked;
					_attribute->Visible=_create_table_2->Checked;
					_create->Enabled=true;
				}
	private: System::Void _menu_detail_in_Click(System::Object^  sender, System::EventArgs^  e) {
					_matrix_input->BringToFront();
					_menu_detail_out->Enabled=!_menu_detail_in->Checked;
					if(_menu_detail_in->Checked)
					{
						_matrix_input->Dock=DockStyle::Fill;
					}
					if(!_menu_detail_in->Checked)
					{
						_matrix_input->Dock=DockStyle::None;
					}
				}
	private: System::Void _manu_detail_out_Click(System::Object^  sender, System::EventArgs^  e) {
					_matrix_output->BringToFront();
					_menu_detail_in->Enabled=!_menu_detail_out->Checked;
					if(_menu_detail_out->Checked)
					{
						_matrix_output->Dock=DockStyle::Fill;
					}
					if(!_menu_detail_out->Checked)
					{
						_matrix_output->Dock=DockStyle::None;
					}
				}
	private: System::Void _tab_solve_Enter(System::Object^  sender, System::EventArgs^  e) {	
				}
	private: System::Void _tab_tables_Enter(System::Object^  sender, System::EventArgs^  e) {
				}
	private: System::Void _tab_charts_Enter(System::Object^  sender, System::EventArgs^  e) {
				}
	private: System::Void _about_Click(System::Object^  sender, System::EventArgs^  e) {
					INFO("Язык программирования\n   Microsoft Visual Studio 2005  \\  С++  \\  Windows Forms Application\nПериод разработки\n   Февраль 2007 - Май 2007");
				}
	private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
					_about_Click(sender,e);
				}
	};
}