#pragma once

namespace PI2021IIIP3EQUIPO1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmCliente
	/// </summary>
	public ref class frmCliente : public System::Windows::Forms::Form
	{
	public:
		frmCliente(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~frmCliente()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblRegistroCliente;
	private: System::Windows::Forms::ComboBox^ cboPersonas;
	private: System::Windows::Forms::Label^ lblSeleccionPersona;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::TextBox^ txtIDCliente;

	private: System::Windows::Forms::TextBox^ txtSaldo;



	private: System::Windows::Forms::ComboBox^ cboMembresia;




	private: System::Windows::Forms::ComboBox^ cboA�oIngreso;
	private: System::Windows::Forms::TextBox^ txtOcupacion;
	private: System::Windows::Forms::Button^ btnRegistrarCliente;
	private: System::Windows::Forms::Button^ btnMostrarCliente;





	private: System::Windows::Forms::Label^ lblNom;
	private: System::Windows::Forms::Label^ lblNombre;
	private: System::Windows::Forms::Label^ lblApel;
	private: System::Windows::Forms::Label^ lblApellido;
	private: System::Windows::Forms::Label^ lblIDcliente;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;

	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Label^ lblA�oIngreso;
	private: System::Windows::Forms::Label^ lblCorreoCliente;

	private: System::Windows::Forms::Label^ lblMembresia;

	private: System::Windows::Forms::Label^ lblOcupacion;
	private: System::Windows::Forms::Label^ lblSaldo;
	private: System::Windows::Forms::Label^ lblDireccionCliente;
	private: System::Windows::Forms::TextBox^ txtDireccionCliente;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::TextBox^ txtCorreoCliente;







	protected:

	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmCliente::typeid));
			this->lblRegistroCliente = (gcnew System::Windows::Forms::Label());
			this->cboPersonas = (gcnew System::Windows::Forms::ComboBox());
			this->lblSeleccionPersona = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->txtIDCliente = (gcnew System::Windows::Forms::TextBox());
			this->txtSaldo = (gcnew System::Windows::Forms::TextBox());
			this->cboMembresia = (gcnew System::Windows::Forms::ComboBox());
			this->cboA�oIngreso = (gcnew System::Windows::Forms::ComboBox());
			this->txtOcupacion = (gcnew System::Windows::Forms::TextBox());
			this->btnRegistrarCliente = (gcnew System::Windows::Forms::Button());
			this->btnMostrarCliente = (gcnew System::Windows::Forms::Button());
			this->lblNom = (gcnew System::Windows::Forms::Label());
			this->lblNombre = (gcnew System::Windows::Forms::Label());
			this->lblApel = (gcnew System::Windows::Forms::Label());
			this->lblApellido = (gcnew System::Windows::Forms::Label());
			this->lblIDcliente = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->lblA�oIngreso = (gcnew System::Windows::Forms::Label());
			this->lblCorreoCliente = (gcnew System::Windows::Forms::Label());
			this->lblMembresia = (gcnew System::Windows::Forms::Label());
			this->lblOcupacion = (gcnew System::Windows::Forms::Label());
			this->lblSaldo = (gcnew System::Windows::Forms::Label());
			this->lblDireccionCliente = (gcnew System::Windows::Forms::Label());
			this->txtDireccionCliente = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->txtCorreoCliente = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// lblRegistroCliente
			// 
			this->lblRegistroCliente->AutoSize = true;
			this->lblRegistroCliente->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRegistroCliente->Location = System::Drawing::Point(228, 46);
			this->lblRegistroCliente->Name = L"lblRegistroCliente";
			this->lblRegistroCliente->Size = System::Drawing::Size(280, 36);
			this->lblRegistroCliente->TabIndex = 0;
			this->lblRegistroCliente->Text = L"Registro De Cliente";
			// 
			// cboPersonas
			// 
			this->cboPersonas->FormattingEnabled = true;
			this->cboPersonas->Location = System::Drawing::Point(122, 185);
			this->cboPersonas->Name = L"cboPersonas";
			this->cboPersonas->Size = System::Drawing::Size(121, 21);
			this->cboPersonas->TabIndex = 1;
			// 
			// lblSeleccionPersona
			// 
			this->lblSeleccionPersona->AutoSize = true;
			this->lblSeleccionPersona->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblSeleccionPersona->Location = System::Drawing::Point(119, 169);
			this->lblSeleccionPersona->Name = L"lblSeleccionPersona";
			this->lblSeleccionPersona->Size = System::Drawing::Size(104, 13);
			this->lblSeleccionPersona->TabIndex = 2;
			this->lblSeleccionPersona->Text = L"Seleccione su ID";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(80, 167);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(42, 43);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(455, 88);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(228, 223);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// txtIDCliente
			// 
			this->txtIDCliente->Location = System::Drawing::Point(264, 185);
			this->txtIDCliente->Name = L"txtIDCliente";
			this->txtIDCliente->Size = System::Drawing::Size(121, 20);
			this->txtIDCliente->TabIndex = 5;
			// 
			// txtSaldo
			// 
			this->txtSaldo->Location = System::Drawing::Point(455, 345);
			this->txtSaldo->Name = L"txtSaldo";
			this->txtSaldo->Size = System::Drawing::Size(121, 20);
			this->txtSaldo->TabIndex = 6;
			// 
			// cboMembresia
			// 
			this->cboMembresia->FormattingEnabled = true;
			this->cboMembresia->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Clasica", L"Premium", L"Mixta" });
			this->cboMembresia->Location = System::Drawing::Point(177, 474);
			this->cboMembresia->Name = L"cboMembresia";
			this->cboMembresia->Size = System::Drawing::Size(121, 21);
			this->cboMembresia->TabIndex = 8;
			// 
			// cboA�oIngreso
			// 
			this->cboA�oIngreso->FormattingEnabled = true;
			this->cboA�oIngreso->Location = System::Drawing::Point(178, 344);
			this->cboA�oIngreso->Name = L"cboA�oIngreso";
			this->cboA�oIngreso->Size = System::Drawing::Size(121, 21);
			this->cboA�oIngreso->TabIndex = 10;
			// 
			// txtOcupacion
			// 
			this->txtOcupacion->Location = System::Drawing::Point(179, 538);
			this->txtOcupacion->Name = L"txtOcupacion";
			this->txtOcupacion->Size = System::Drawing::Size(121, 20);
			this->txtOcupacion->TabIndex = 11;
			// 
			// btnRegistrarCliente
			// 
			this->btnRegistrarCliente->BackColor = System::Drawing::Color::PeachPuff;
			this->btnRegistrarCliente->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnRegistrarCliente->FlatAppearance->BorderSize = 2;
			this->btnRegistrarCliente->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRegistrarCliente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnRegistrarCliente->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnRegistrarCliente->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnRegistrarCliente.Image")));
			this->btnRegistrarCliente->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnRegistrarCliente->Location = System::Drawing::Point(455, 424);
			this->btnRegistrarCliente->Name = L"btnRegistrarCliente";
			this->btnRegistrarCliente->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->btnRegistrarCliente->Size = System::Drawing::Size(152, 53);
			this->btnRegistrarCliente->TabIndex = 12;
			this->btnRegistrarCliente->Text = L"Registrar Cliente";
			this->btnRegistrarCliente->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnRegistrarCliente->UseVisualStyleBackColor = false;
			// 
			// btnMostrarCliente
			// 
			this->btnMostrarCliente->BackColor = System::Drawing::Color::PeachPuff;
			this->btnMostrarCliente->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnMostrarCliente->FlatAppearance->BorderSize = 2;
			this->btnMostrarCliente->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMostrarCliente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMostrarCliente->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnMostrarCliente->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMostrarCliente.Image")));
			this->btnMostrarCliente->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnMostrarCliente->Location = System::Drawing::Point(455, 491);
			this->btnMostrarCliente->Name = L"btnMostrarCliente";
			this->btnMostrarCliente->Size = System::Drawing::Size(152, 53);
			this->btnMostrarCliente->TabIndex = 13;
			this->btnMostrarCliente->Text = L"Mostrar Cliente";
			this->btnMostrarCliente->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnMostrarCliente->UseVisualStyleBackColor = false;
			// 
			// lblNom
			// 
			this->lblNom->AutoSize = true;
			this->lblNom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblNom->Location = System::Drawing::Point(119, 242);
			this->lblNom->Name = L"lblNom";
			this->lblNom->Size = System::Drawing::Size(58, 13);
			this->lblNom->TabIndex = 14;
			this->lblNom->Text = L"Nombre: ";
			// 
			// lblNombre
			// 
			this->lblNombre->AutoSize = true;
			this->lblNombre->Location = System::Drawing::Point(177, 242);
			this->lblNombre->Name = L"lblNombre";
			this->lblNombre->Size = System::Drawing::Size(0, 13);
			this->lblNombre->TabIndex = 15;
			// 
			// lblApel
			// 
			this->lblApel->AutoSize = true;
			this->lblApel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblApel->Location = System::Drawing::Point(279, 242);
			this->lblApel->Name = L"lblApel";
			this->lblApel->Size = System::Drawing::Size(60, 13);
			this->lblApel->TabIndex = 16;
			this->lblApel->Text = L"Apellido: ";
			// 
			// lblApellido
			// 
			this->lblApellido->AutoSize = true;
			this->lblApellido->Location = System::Drawing::Point(339, 242);
			this->lblApellido->Name = L"lblApellido";
			this->lblApellido->Size = System::Drawing::Size(0, 13);
			this->lblApellido->TabIndex = 17;
			// 
			// lblIDcliente
			// 
			this->lblIDcliente->AutoSize = true;
			this->lblIDcliente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblIDcliente->Location = System::Drawing::Point(265, 169);
			this->lblIDcliente->Name = L"lblIDcliente";
			this->lblIDcliente->Size = System::Drawing::Size(83, 13);
			this->lblIDcliente->TabIndex = 18;
			this->lblIDcliente->Text = L"ID del cliente";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(118, 328);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(40, 38);
			this->pictureBox3->TabIndex = 19;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(116, 583);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(41, 42);
			this->pictureBox4->TabIndex = 20;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(119, 461);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(38, 42);
			this->pictureBox5->TabIndex = 21;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(116, 522);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(40, 37);
			this->pictureBox7->TabIndex = 23;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(393, 332);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(43, 34);
			this->pictureBox8->TabIndex = 24;
			this->pictureBox8->TabStop = false;
			// 
			// lblA�oIngreso
			// 
			this->lblA�oIngreso->AutoSize = true;
			this->lblA�oIngreso->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblA�oIngreso->Location = System::Drawing::Point(177, 329);
			this->lblA�oIngreso->Name = L"lblA�oIngreso";
			this->lblA�oIngreso->Size = System::Drawing::Size(92, 13);
			this->lblA�oIngreso->TabIndex = 25;
			this->lblA�oIngreso->Text = L"A�o de ingreso";
			// 
			// lblCorreoCliente
			// 
			this->lblCorreoCliente->AutoSize = true;
			this->lblCorreoCliente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCorreoCliente->Location = System::Drawing::Point(177, 581);
			this->lblCorreoCliente->Name = L"lblCorreoCliente";
			this->lblCorreoCliente->Size = System::Drawing::Size(111, 13);
			this->lblCorreoCliente->TabIndex = 26;
			this->lblCorreoCliente->Text = L"Correo electronico";
			// 
			// lblMembresia
			// 
			this->lblMembresia->AutoSize = true;
			this->lblMembresia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMembresia->Location = System::Drawing::Point(177, 459);
			this->lblMembresia->Name = L"lblMembresia";
			this->lblMembresia->Size = System::Drawing::Size(113, 13);
			this->lblMembresia->TabIndex = 27;
			this->lblMembresia->Text = L"Tipo de membresia";
			// 
			// lblOcupacion
			// 
			this->lblOcupacion->AutoSize = true;
			this->lblOcupacion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblOcupacion->Location = System::Drawing::Point(177, 524);
			this->lblOcupacion->Name = L"lblOcupacion";
			this->lblOcupacion->Size = System::Drawing::Size(68, 13);
			this->lblOcupacion->TabIndex = 29;
			this->lblOcupacion->Text = L"Ocupacion";
			// 
			// lblSaldo
			// 
			this->lblSaldo->AutoSize = true;
			this->lblSaldo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSaldo->Location = System::Drawing::Point(452, 329);
			this->lblSaldo->Name = L"lblSaldo";
			this->lblSaldo->Size = System::Drawing::Size(39, 13);
			this->lblSaldo->TabIndex = 30;
			this->lblSaldo->Text = L"Saldo";
			// 
			// lblDireccionCliente
			// 
			this->lblDireccionCliente->AutoSize = true;
			this->lblDireccionCliente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblDireccionCliente->Location = System::Drawing::Point(177, 397);
			this->lblDireccionCliente->Name = L"lblDireccionCliente";
			this->lblDireccionCliente->Size = System::Drawing::Size(61, 13);
			this->lblDireccionCliente->TabIndex = 31;
			this->lblDireccionCliente->Text = L"Direccion";
			// 
			// txtDireccionCliente
			// 
			this->txtDireccionCliente->Location = System::Drawing::Point(177, 414);
			this->txtDireccionCliente->Name = L"txtDireccionCliente";
			this->txtDireccionCliente->Size = System::Drawing::Size(121, 20);
			this->txtDireccionCliente->TabIndex = 32;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(122, 397);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(36, 37);
			this->pictureBox6->TabIndex = 33;
			this->pictureBox6->TabStop = false;
			// 
			// txtCorreoCliente
			// 
			this->txtCorreoCliente->Location = System::Drawing::Point(180, 598);
			this->txtCorreoCliente->Name = L"txtCorreoCliente";
			this->txtCorreoCliente->Size = System::Drawing::Size(120, 20);
			this->txtCorreoCliente->TabIndex = 34;
			// 
			// frmCliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(738, 657);
			this->Controls->Add(this->txtCorreoCliente);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->txtDireccionCliente);
			this->Controls->Add(this->lblDireccionCliente);
			this->Controls->Add(this->lblSaldo);
			this->Controls->Add(this->lblOcupacion);
			this->Controls->Add(this->lblMembresia);
			this->Controls->Add(this->lblCorreoCliente);
			this->Controls->Add(this->lblA�oIngreso);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->lblIDcliente);
			this->Controls->Add(this->lblApellido);
			this->Controls->Add(this->lblApel);
			this->Controls->Add(this->lblNombre);
			this->Controls->Add(this->lblNom);
			this->Controls->Add(this->btnMostrarCliente);
			this->Controls->Add(this->btnRegistrarCliente);
			this->Controls->Add(this->txtOcupacion);
			this->Controls->Add(this->cboA�oIngreso);
			this->Controls->Add(this->cboMembresia);
			this->Controls->Add(this->txtSaldo);
			this->Controls->Add(this->txtIDCliente);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->lblSeleccionPersona);
			this->Controls->Add(this->cboPersonas);
			this->Controls->Add(this->lblRegistroCliente);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmCliente";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Cliente";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnMostrarCliente_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
