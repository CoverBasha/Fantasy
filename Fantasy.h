#pragma once
#include<iostream>
#include"Admin.h"
#include"User.h"
#include"Player.h"
#include"Global.h"
#include"League.h"
#include"Club.h"
#include<fstream>
#include<msclr\\marshal_cppstd.h>
#include<windows.h>
#include<sstream>
#include<exception>
#using<System.Windows.Forms.dll>

using namespace System::Collections::Generic;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


void collapse(Panel^ p);
void readFile();
void writeFile();
Club* findClub(int clubid);
League* findLeague(std::string name);
Player* findPlayer(std::string name);
Point centralize(Label^ label);



//Footballer file
std::string footballerFile_Path = "Data/footballers.bin";
std::fstream footballerFile;

String^ cppToSystem(std::string str)
{
	return gcnew String(str.c_str());
}


User currentUser;
Admin currentAdmin;

namespace Fantasy
{



	/// <summary>
	/// Summary for Fantasy
	/// </summary>
	public ref class Fantasy : public System::Windows::Forms::Form
	{
	public:
		Fantasy(void)
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
		~Fantasy()
		{
			if (components)
			{
				delete components;
			}
		}

		System::Drawing::Size panelsize = System::Drawing::Size(814, 100);
		System::Drawing::Size imagesize = System::Drawing::Size(88, 92);
		System::Drawing::Size namesize = System::Drawing::Size(88, 92);
		System::Drawing::Size possize = System::Drawing::Size(88, 92);
		System::Drawing::Size clubsize = System::Drawing::Size(112, 64);

	private: System::Windows::Forms::Label^ welcomeText;
	private: System::Windows::Forms::TextBox^ userNameBox;
	private: System::Windows::Forms::Label^ loginText;
	private: System::Windows::Forms::TextBox^ passwordBox;

	private: System::Windows::Forms::Button^ loginButton;
	private: System::Windows::Forms::Label^ noAccText;
	private: System::Windows::Forms::Label^ signUpLinkText;
	private: System::Windows::Forms::Panel^ loginPage;

	private: System::Windows::Forms::Panel^ signupPage;
	private: System::Windows::Forms::Button^ signupButton;
	private: System::Windows::Forms::TextBox^ passwordSignUpBox;

	private: System::Windows::Forms::TextBox^ userNameSignUpBox;
	private: System::Windows::Forms::TextBox^ IDBox;


	private: System::Windows::Forms::CheckBox^ adminSignUpbox;
	private: System::Windows::Forms::Panel^ homePage;


	private: System::Windows::Forms::Label^ loginErrorText;
	private: System::Windows::Forms::Label^ welcomeSignupLabel;
	private: System::Windows::Forms::Label^ signupBack;
	private: System::Windows::Forms::Label^ userExistLabel;
	private: System::Windows::Forms::Label^ adminException;
	private: System::Windows::Forms::Label^ userException;
	private: System::Windows::Forms::Label^ footballerException;
	private: System::Windows::Forms::Panel^ sidePanel;
	private: System::Windows::Forms::Label^ helloLabel;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ menuIcon;
	private: System::Windows::Forms::Label^ rankLabel;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ transferMarketButton;
	private: System::Windows::Forms::Label^ logoutLabel;
	private: System::Windows::Forms::Label^ compLabel;
	private: System::Windows::Forms::PictureBox^ backArrow;
	private: System::Windows::Forms::Panel^ transferMarketPanel;
	private: System::Windows::Forms::Panel^ adminPage;
	private: System::Windows::Forms::Label^ adminWelcome;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::FlowLayoutPanel^ playerList;
	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::Panel^ addPlayerPanel;


	private: System::Windows::Forms::TextBox^ playerNameBox;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ playerPriceBox;
	private: System::Windows::Forms::ComboBox^ playerpostion;
	private: System::Windows::Forms::Button^ addplayerbutton;
	private: System::Windows::Forms::PictureBox^ nextclubbutton;


	private: System::Windows::Forms::PictureBox^ clubchoiceimage;
	private: System::Windows::Forms::Label^ clubnamelabel;
	private: System::Windows::Forms::PictureBox^ prevclubbutton;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ adminSidePanel;
	private: System::Windows::Forms::Label^ addClubOption;
	private: System::Windows::Forms::Label^ admintransfermarketoption;

	private: System::Windows::Forms::Label^ adminlogoutoption;


	private: System::Windows::Forms::Label^ addPlayerOption;
	private: System::Windows::Forms::PictureBox^ collapsemenuButton;
	private: System::Windows::Forms::PictureBox^ adminMenuIcon;
private: System::Windows::Forms::Timer^ timer2;
private: System::Windows::Forms::Label^ leagueoption;
private: System::Windows::Forms::PictureBox^ prevleaguebutton;

private: System::Windows::Forms::PictureBox^ nextleaguebutton;
private: System::Windows::Forms::Label^ playerexisterror;
private: System::Windows::Forms::Label^ playeremptyfieldserror;

private: System::Windows::Forms::Label^ playeraddsuccess;
private: System::Windows::Forms::Label^ noleagueerror;
private: System::Windows::Forms::Label^ noclubserror;
private: System::Windows::Forms::Label^ addLeagueOption;
private: System::Windows::Forms::Label^ mainPage;
private: System::Windows::Forms::Panel^ addLeaguePanel;
private: System::Windows::Forms::Label^ leagueaddsuccess;

private: System::Windows::Forms::Label^ leagueexisterror;
private: System::Windows::Forms::Button^ addleaguebutton;

private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::TextBox^ leaguenamebox;

private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ leagueemptyfieldserror;
private: System::Windows::Forms::Panel^ addClubPanel;
private: System::Windows::Forms::Label^ clubaddsuccess;

private: System::Windows::Forms::Label^ clubemptyfieldserror;
private: System::Windows::Forms::Label^ clubexisterror;
private: System::Windows::Forms::Button^ addclubbutton;

private: System::Windows::Forms::PictureBox^ prevleaguechoice;
private: System::Windows::Forms::PictureBox^ nextleaguechoice;
private: System::Windows::Forms::PictureBox^ leaguechoiceimage;
private: System::Windows::Forms::Label^ leaguename;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::TextBox^ clubnamebox;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ clubsno;

private: System::Windows::Forms::Label^ leaguesno;

private: System::Windows::Forms::Label^ adminsno;

private: System::Windows::Forms::Label^ usersno;
private: System::Windows::Forms::Label^ playersno;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label17;










		   //private: System::Windows::Forms::VScrollBar^ vScrollBar1;


		   



	private: System::ComponentModel::IContainer^ components;

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
	/// <summary>
	/// Required method for Designer support - do not modify
	/// the contents of this method with the code editor.
	/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Fantasy::typeid));
			this->welcomeText = (gcnew System::Windows::Forms::Label());
			this->userNameBox = (gcnew System::Windows::Forms::TextBox());
			this->loginText = (gcnew System::Windows::Forms::Label());
			this->passwordBox = (gcnew System::Windows::Forms::TextBox());
			this->loginButton = (gcnew System::Windows::Forms::Button());
			this->noAccText = (gcnew System::Windows::Forms::Label());
			this->signUpLinkText = (gcnew System::Windows::Forms::Label());
			this->loginPage = (gcnew System::Windows::Forms::Panel());
			this->adminException = (gcnew System::Windows::Forms::Label());
			this->userException = (gcnew System::Windows::Forms::Label());
			this->footballerException = (gcnew System::Windows::Forms::Label());
			this->loginErrorText = (gcnew System::Windows::Forms::Label());
			this->signupPage = (gcnew System::Windows::Forms::Panel());
			this->signupBack = (gcnew System::Windows::Forms::Label());
			this->userExistLabel = (gcnew System::Windows::Forms::Label());
			this->welcomeSignupLabel = (gcnew System::Windows::Forms::Label());
			this->adminSignUpbox = (gcnew System::Windows::Forms::CheckBox());
			this->IDBox = (gcnew System::Windows::Forms::TextBox());
			this->signupButton = (gcnew System::Windows::Forms::Button());
			this->passwordSignUpBox = (gcnew System::Windows::Forms::TextBox());
			this->userNameSignUpBox = (gcnew System::Windows::Forms::TextBox());
			this->homePage = (gcnew System::Windows::Forms::Panel());
			this->rankLabel = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->helloLabel = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->sidePanel = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->transferMarketButton = (gcnew System::Windows::Forms::Label());
			this->logoutLabel = (gcnew System::Windows::Forms::Label());
			this->compLabel = (gcnew System::Windows::Forms::Label());
			this->backArrow = (gcnew System::Windows::Forms::PictureBox());
			this->menuIcon = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->transferMarketPanel = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->playerList = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->adminPage = (gcnew System::Windows::Forms::Panel());
			this->playersno = (gcnew System::Windows::Forms::Label());
			this->clubsno = (gcnew System::Windows::Forms::Label());
			this->leaguesno = (gcnew System::Windows::Forms::Label());
			this->adminsno = (gcnew System::Windows::Forms::Label());
			this->usersno = (gcnew System::Windows::Forms::Label());
			this->adminWelcome = (gcnew System::Windows::Forms::Label());
			this->adminMenuIcon = (gcnew System::Windows::Forms::PictureBox());
			this->adminSidePanel = (gcnew System::Windows::Forms::Panel());
			this->addLeagueOption = (gcnew System::Windows::Forms::Label());
			this->mainPage = (gcnew System::Windows::Forms::Label());
			this->noleagueerror = (gcnew System::Windows::Forms::Label());
			this->noclubserror = (gcnew System::Windows::Forms::Label());
			this->addClubOption = (gcnew System::Windows::Forms::Label());
			this->admintransfermarketoption = (gcnew System::Windows::Forms::Label());
			this->adminlogoutoption = (gcnew System::Windows::Forms::Label());
			this->addPlayerOption = (gcnew System::Windows::Forms::Label());
			this->collapsemenuButton = (gcnew System::Windows::Forms::PictureBox());
			this->addPlayerPanel = (gcnew System::Windows::Forms::Panel());
			this->playeraddsuccess = (gcnew System::Windows::Forms::Label());
			this->playeremptyfieldserror = (gcnew System::Windows::Forms::Label());
			this->playerexisterror = (gcnew System::Windows::Forms::Label());
			this->leagueoption = (gcnew System::Windows::Forms::Label());
			this->prevleaguebutton = (gcnew System::Windows::Forms::PictureBox());
			this->nextleaguebutton = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->addplayerbutton = (gcnew System::Windows::Forms::Button());
			this->prevclubbutton = (gcnew System::Windows::Forms::PictureBox());
			this->nextclubbutton = (gcnew System::Windows::Forms::PictureBox());
			this->clubchoiceimage = (gcnew System::Windows::Forms::PictureBox());
			this->clubnamelabel = (gcnew System::Windows::Forms::Label());
			this->playerpostion = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->playerPriceBox = (gcnew System::Windows::Forms::TextBox());
			this->playerNameBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->addLeaguePanel = (gcnew System::Windows::Forms::Panel());
			this->leagueemptyfieldserror = (gcnew System::Windows::Forms::Label());
			this->leagueaddsuccess = (gcnew System::Windows::Forms::Label());
			this->leagueexisterror = (gcnew System::Windows::Forms::Label());
			this->addleaguebutton = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->leaguenamebox = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->addClubPanel = (gcnew System::Windows::Forms::Panel());
			this->clubaddsuccess = (gcnew System::Windows::Forms::Label());
			this->clubemptyfieldserror = (gcnew System::Windows::Forms::Label());
			this->clubexisterror = (gcnew System::Windows::Forms::Label());
			this->addclubbutton = (gcnew System::Windows::Forms::Button());
			this->prevleaguechoice = (gcnew System::Windows::Forms::PictureBox());
			this->nextleaguechoice = (gcnew System::Windows::Forms::PictureBox());
			this->leaguechoiceimage = (gcnew System::Windows::Forms::PictureBox());
			this->leaguename = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->clubnamebox = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->loginPage->SuspendLayout();
			this->signupPage->SuspendLayout();
			this->homePage->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->sidePanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backArrow))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->menuIcon))->BeginInit();
			this->transferMarketPanel->SuspendLayout();
			this->adminPage->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->adminMenuIcon))->BeginInit();
			this->adminSidePanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->collapsemenuButton))->BeginInit();
			this->addPlayerPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->prevleaguebutton))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nextleaguebutton))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->prevclubbutton))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nextclubbutton))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->clubchoiceimage))->BeginInit();
			this->addLeaguePanel->SuspendLayout();
			this->addClubPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->prevleaguechoice))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nextleaguechoice))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->leaguechoiceimage))->BeginInit();
			this->SuspendLayout();
			// 
			// welcomeText
			// 
			this->welcomeText->AutoSize = true;
			this->welcomeText->BackColor = System::Drawing::Color::Transparent;
			this->welcomeText->Font = (gcnew System::Drawing::Font(L"Radikal Black", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->welcomeText->ForeColor = System::Drawing::Color::White;
			this->welcomeText->Location = System::Drawing::Point(267, 32);
			this->welcomeText->Name = L"welcomeText";
			this->welcomeText->Size = System::Drawing::Size(747, 150);
			this->welcomeText->TabIndex = 0;
			this->welcomeText->Text = L"Welcome to the\r\nPremier League: Fantasy\r\n";
			this->welcomeText->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// userNameBox
			// 
			this->userNameBox->BackColor = System::Drawing::Color::White;
			this->userNameBox->Font = (gcnew System::Drawing::Font(L"Radikal Light", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->userNameBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->userNameBox->Location = System::Drawing::Point(376, 304);
			this->userNameBox->Name = L"userNameBox";
			this->userNameBox->Size = System::Drawing::Size(528, 54);
			this->userNameBox->TabIndex = 1;
			// 
			// loginText
			// 
			this->loginText->AutoSize = true;
			this->loginText->BackColor = System::Drawing::Color::Transparent;
			this->loginText->Font = (gcnew System::Drawing::Font(L"Radikal", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginText->ForeColor = System::Drawing::Color::White;
			this->loginText->Location = System::Drawing::Point(577, 219);
			this->loginText->Name = L"loginText";
			this->loginText->Size = System::Drawing::Size(127, 50);
			this->loginText->TabIndex = 2;
			this->loginText->Text = L"Login";
			// 
			// passwordBox
			// 
			this->passwordBox->Font = (gcnew System::Drawing::Font(L"Radikal Thin", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->passwordBox->Location = System::Drawing::Point(376, 404);
			this->passwordBox->Name = L"passwordBox";
			this->passwordBox->PasswordChar = '*';
			this->passwordBox->Size = System::Drawing::Size(528, 54);
			this->passwordBox->TabIndex = 3;
			this->passwordBox->UseSystemPasswordChar = true;
			// 
			// loginButton
			// 
			this->loginButton->BackColor = System::Drawing::Color::Transparent;
			this->loginButton->Font = (gcnew System::Drawing::Font(L"Radikal Medium", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->loginButton->Location = System::Drawing::Point(523, 514);
			this->loginButton->Name = L"loginButton";
			this->loginButton->Size = System::Drawing::Size(235, 56);
			this->loginButton->TabIndex = 4;
			this->loginButton->Text = L"Log in";
			this->loginButton->UseVisualStyleBackColor = false;
			this->loginButton->Click += gcnew System::EventHandler(this, &Fantasy::loginButton_Click);
			// 
			// noAccText
			// 
			this->noAccText->AutoSize = true;
			this->noAccText->BackColor = System::Drawing::Color::Transparent;
			this->noAccText->Font = (gcnew System::Drawing::Font(L"Radikal Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->noAccText->ForeColor = System::Drawing::Color::White;
			this->noAccText->Location = System::Drawing::Point(486, 591);
			this->noAccText->Name = L"noAccText";
			this->noAccText->Size = System::Drawing::Size(228, 25);
			this->noAccText->TabIndex = 5;
			this->noAccText->Text = L"Don\'t have an account\?";
			// 
			// signUpLinkText
			// 
			this->signUpLinkText->AutoSize = true;
			this->signUpLinkText->BackColor = System::Drawing::Color::Transparent;
			this->signUpLinkText->Cursor = System::Windows::Forms::Cursors::Hand;
			this->signUpLinkText->Font = (gcnew System::Drawing::Font(L"Radikal Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signUpLinkText->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->signUpLinkText->Location = System::Drawing::Point(720, 591);
			this->signUpLinkText->Name = L"signUpLinkText";
			this->signUpLinkText->Size = System::Drawing::Size(81, 25);
			this->signUpLinkText->TabIndex = 6;
			this->signUpLinkText->Text = L"Sign up";
			this->signUpLinkText->Click += gcnew System::EventHandler(this, &Fantasy::signUpLinkText_Click);
			// 
			// loginPage
			// 
			this->loginPage->BackColor = System::Drawing::Color::White;
			this->loginPage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"loginPage.BackgroundImage")));
			this->loginPage->Controls->Add(this->adminException);
			this->loginPage->Controls->Add(this->userException);
			this->loginPage->Controls->Add(this->footballerException);
			this->loginPage->Controls->Add(this->loginErrorText);
			this->loginPage->Controls->Add(this->welcomeText);
			this->loginPage->Controls->Add(this->signUpLinkText);
			this->loginPage->Controls->Add(this->userNameBox);
			this->loginPage->Controls->Add(this->noAccText);
			this->loginPage->Controls->Add(this->loginText);
			this->loginPage->Controls->Add(this->loginButton);
			this->loginPage->Controls->Add(this->passwordBox);
			this->loginPage->Dock = System::Windows::Forms::DockStyle::Fill;
			this->loginPage->Location = System::Drawing::Point(0, 0);
			this->loginPage->Name = L"loginPage";
			this->loginPage->Size = System::Drawing::Size(1262, 673);
			this->loginPage->TabIndex = 7;
			this->loginPage->Visible = false;
			// 
			// adminException
			// 
			this->adminException->AutoSize = true;
			this->adminException->BackColor = System::Drawing::Color::Transparent;
			this->adminException->Cursor = System::Windows::Forms::Cursors::Default;
			this->adminException->Font = (gcnew System::Drawing::Font(L"Radikal Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adminException->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->adminException->Location = System::Drawing::Point(12, 63);
			this->adminException->Name = L"adminException";
			this->adminException->Size = System::Drawing::Size(98, 25);
			this->adminException->TabIndex = 10;
			this->adminException->Text = L"First time";
			this->adminException->Visible = false;
			// 
			// userException
			// 
			this->userException->AutoSize = true;
			this->userException->BackColor = System::Drawing::Color::Transparent;
			this->userException->Cursor = System::Windows::Forms::Cursors::Default;
			this->userException->Font = (gcnew System::Drawing::Font(L"Radikal Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->userException->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->userException->Location = System::Drawing::Point(12, 91);
			this->userException->Name = L"userException";
			this->userException->Size = System::Drawing::Size(98, 25);
			this->userException->TabIndex = 9;
			this->userException->Text = L"First time";
			this->userException->Visible = false;
			// 
			// footballerException
			// 
			this->footballerException->AutoSize = true;
			this->footballerException->BackColor = System::Drawing::Color::Transparent;
			this->footballerException->Cursor = System::Windows::Forms::Cursors::Default;
			this->footballerException->Font = (gcnew System::Drawing::Font(L"Radikal Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->footballerException->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->footballerException->Location = System::Drawing::Point(12, 118);
			this->footballerException->Name = L"footballerException";
			this->footballerException->Size = System::Drawing::Size(98, 25);
			this->footballerException->TabIndex = 8;
			this->footballerException->Text = L"First time";
			this->footballerException->Visible = false;
			// 
			// loginErrorText
			// 
			this->loginErrorText->AutoSize = true;
			this->loginErrorText->BackColor = System::Drawing::Color::Transparent;
			this->loginErrorText->Cursor = System::Windows::Forms::Cursors::Hand;
			this->loginErrorText->Font = (gcnew System::Drawing::Font(L"Radikal Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginErrorText->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->loginErrorText->Location = System::Drawing::Point(486, 476);
			this->loginErrorText->Name = L"loginErrorText";
			this->loginErrorText->Size = System::Drawing::Size(299, 25);
			this->loginErrorText->TabIndex = 7;
			this->loginErrorText->Text = L"Incorrect username or password";
			this->loginErrorText->Visible = false;
			// 
			// signupPage
			// 
			this->signupPage->BackColor = System::Drawing::Color::White;
			this->signupPage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"signupPage.BackgroundImage")));
			this->signupPage->Controls->Add(this->signupBack);
			this->signupPage->Controls->Add(this->userExistLabel);
			this->signupPage->Controls->Add(this->welcomeSignupLabel);
			this->signupPage->Controls->Add(this->adminSignUpbox);
			this->signupPage->Controls->Add(this->IDBox);
			this->signupPage->Controls->Add(this->signupButton);
			this->signupPage->Controls->Add(this->passwordSignUpBox);
			this->signupPage->Controls->Add(this->userNameSignUpBox);
			this->signupPage->Dock = System::Windows::Forms::DockStyle::Fill;
			this->signupPage->Location = System::Drawing::Point(0, 0);
			this->signupPage->Name = L"signupPage";
			this->signupPage->Size = System::Drawing::Size(1262, 673);
			this->signupPage->TabIndex = 8;
			this->signupPage->Visible = false;
			// 
			// signupBack
			// 
			this->signupBack->AutoSize = true;
			this->signupBack->BackColor = System::Drawing::Color::Transparent;
			this->signupBack->Cursor = System::Windows::Forms::Cursors::Hand;
			this->signupBack->Font = (gcnew System::Drawing::Font(L"Radikal Medium", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signupBack->ForeColor = System::Drawing::Color::White;
			this->signupBack->Location = System::Drawing::Point(118, 501);
			this->signupBack->Name = L"signupBack";
			this->signupBack->Size = System::Drawing::Size(124, 46);
			this->signupBack->TabIndex = 8;
			this->signupBack->Text = L"BACK";
			this->signupBack->Click += gcnew System::EventHandler(this, &Fantasy::signupBack_Click);
			// 
			// userExistLabel
			// 
			this->userExistLabel->AutoSize = true;
			this->userExistLabel->BackColor = System::Drawing::Color::Transparent;
			this->userExistLabel->Font = (gcnew System::Drawing::Font(L"Radikal Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->userExistLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(91)));
			this->userExistLabel->Location = System::Drawing::Point(525, 451);
			this->userExistLabel->Name = L"userExistLabel";
			this->userExistLabel->Size = System::Drawing::Size(229, 25);
			this->userExistLabel->TabIndex = 7;
			this->userExistLabel->Text = L"This user already exists!";
			this->userExistLabel->Visible = false;
			// 
			// welcomeSignupLabel
			// 
			this->welcomeSignupLabel->AutoSize = true;
			this->welcomeSignupLabel->BackColor = System::Drawing::Color::Transparent;
			this->welcomeSignupLabel->Font = (gcnew System::Drawing::Font(L"Radikal Black", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->welcomeSignupLabel->ForeColor = System::Drawing::Color::White;
			this->welcomeSignupLabel->Location = System::Drawing::Point(226, 54);
			this->welcomeSignupLabel->Name = L"welcomeSignupLabel";
			this->welcomeSignupLabel->Size = System::Drawing::Size(827, 75);
			this->welcomeSignupLabel->TabIndex = 6;
			this->welcomeSignupLabel->Text = L"A ton of excitement awaits!";
			// 
			// adminSignUpbox
			// 
			this->adminSignUpbox->AutoSize = true;
			this->adminSignUpbox->BackColor = System::Drawing::Color::Transparent;
			this->adminSignUpbox->Font = (gcnew System::Drawing::Font(L"Radikal Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adminSignUpbox->ForeColor = System::Drawing::Color::White;
			this->adminSignUpbox->Location = System::Drawing::Point(731, 393);
			this->adminSignUpbox->Name = L"adminSignUpbox";
			this->adminSignUpbox->Size = System::Drawing::Size(95, 29);
			this->adminSignUpbox->TabIndex = 5;
			this->adminSignUpbox->Text = L"Admin";
			this->adminSignUpbox->UseVisualStyleBackColor = false;
			// 
			// IDBox
			// 
			this->IDBox->Font = (gcnew System::Drawing::Font(L"Radikal Light", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IDBox->Location = System::Drawing::Point(415, 368);
			this->IDBox->Name = L"IDBox";
			this->IDBox->Size = System::Drawing::Size(160, 54);
			this->IDBox->TabIndex = 4;
			// 
			// signupButton
			// 
			this->signupButton->Font = (gcnew System::Drawing::Font(L"Radikal Medium", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signupButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->signupButton->Location = System::Drawing::Point(535, 481);
			this->signupButton->Name = L"signupButton";
			this->signupButton->Size = System::Drawing::Size(209, 66);
			this->signupButton->TabIndex = 3;
			this->signupButton->Text = L"Sign Up";
			this->signupButton->UseVisualStyleBackColor = true;
			this->signupButton->Click += gcnew System::EventHandler(this, &Fantasy::signupButton_Click);
			// 
			// passwordSignUpBox
			// 
			this->passwordSignUpBox->Font = (gcnew System::Drawing::Font(L"Radikal Light", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordSignUpBox->Location = System::Drawing::Point(415, 277);
			this->passwordSignUpBox->Name = L"passwordSignUpBox";
			this->passwordSignUpBox->Size = System::Drawing::Size(450, 54);
			this->passwordSignUpBox->TabIndex = 1;
			this->passwordSignUpBox->UseSystemPasswordChar = true;
			// 
			// userNameSignUpBox
			// 
			this->userNameSignUpBox->Font = (gcnew System::Drawing::Font(L"Radikal Light", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->userNameSignUpBox->Location = System::Drawing::Point(415, 185);
			this->userNameSignUpBox->Name = L"userNameSignUpBox";
			this->userNameSignUpBox->Size = System::Drawing::Size(450, 54);
			this->userNameSignUpBox->TabIndex = 0;
			// 
			// homePage
			// 
			this->homePage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"homePage.BackgroundImage")));
			this->homePage->Controls->Add(this->rankLabel);
			this->homePage->Controls->Add(this->pictureBox2);
			this->homePage->Controls->Add(this->label2);
			this->homePage->Controls->Add(this->helloLabel);
			this->homePage->Controls->Add(this->pictureBox1);
			this->homePage->Dock = System::Windows::Forms::DockStyle::Fill;
			this->homePage->Location = System::Drawing::Point(0, 0);
			this->homePage->Name = L"homePage";
			this->homePage->Size = System::Drawing::Size(1262, 673);
			this->homePage->TabIndex = 9;
			this->homePage->Visible = false;
			this->homePage->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Fantasy::homePage_Paint);
			// 
			// rankLabel
			// 
			this->rankLabel->AutoSize = true;
			this->rankLabel->BackColor = System::Drawing::Color::Transparent;
			this->rankLabel->Font = (gcnew System::Drawing::Font(L"Radikal Medium", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rankLabel->ForeColor = System::Drawing::Color::White;
			this->rankLabel->Location = System::Drawing::Point(875, 239);
			this->rankLabel->Name = L"rankLabel";
			this->rankLabel->Size = System::Drawing::Size(113, 46);
			this->rankLabel->TabIndex = 6;
			this->rankLabel->Text = L"Rank";
			this->rankLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(202, 362);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(875, 308);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Radikal Medium", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(522, 239);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(236, 46);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Total points\r\n";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// helloLabel
			// 
			this->helloLabel->AutoSize = true;
			this->helloLabel->BackColor = System::Drawing::Color::Transparent;
			this->helloLabel->Font = (gcnew System::Drawing::Font(L"Radikal Medium", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->helloLabel->ForeColor = System::Drawing::Color::White;
			this->helloLabel->Location = System::Drawing::Point(228, 240);
			this->helloLabel->Name = L"helloLabel";
			this->helloLabel->Size = System::Drawing::Size(224, 46);
			this->helloLabel->TabIndex = 2;
			this->helloLabel->Text = L"Cover ba4a";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(202, 5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(875, 216);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// sidePanel
			// 
			this->sidePanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->sidePanel->Controls->Add(this->label4);
			this->sidePanel->Controls->Add(this->transferMarketButton);
			this->sidePanel->Controls->Add(this->logoutLabel);
			this->sidePanel->Controls->Add(this->compLabel);
			this->sidePanel->Controls->Add(this->backArrow);
			this->sidePanel->Cursor = System::Windows::Forms::Cursors::Default;
			this->sidePanel->Dock = System::Windows::Forms::DockStyle::Left;
			this->sidePanel->Location = System::Drawing::Point(0, 0);
			this->sidePanel->Name = L"sidePanel";
			this->sidePanel->Size = System::Drawing::Size(10, 673);
			this->sidePanel->TabIndex = 0;
			this->sidePanel->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label4->Font = (gcnew System::Drawing::Font(L"Radikal", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(15, 250);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(321, 42);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Team management";
			// 
			// transferMarketButton
			// 
			this->transferMarketButton->AutoSize = true;
			this->transferMarketButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->transferMarketButton->Font = (gcnew System::Drawing::Font(L"Radikal", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->transferMarketButton->ForeColor = System::Drawing::Color::White;
			this->transferMarketButton->Location = System::Drawing::Point(15, 330);
			this->transferMarketButton->Name = L"transferMarketButton";
			this->transferMarketButton->Size = System::Drawing::Size(266, 42);
			this->transferMarketButton->TabIndex = 4;
			this->transferMarketButton->Text = L"Transfer market";
			this->transferMarketButton->Click += gcnew System::EventHandler(this, &Fantasy::transferMarketButton_Click);
			// 
			// logoutLabel
			// 
			this->logoutLabel->AutoSize = true;
			this->logoutLabel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->logoutLabel->Font = (gcnew System::Drawing::Font(L"Radikal", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->logoutLabel->ForeColor = System::Drawing::Color::White;
			this->logoutLabel->Location = System::Drawing::Point(15, 410);
			this->logoutLabel->Name = L"logoutLabel";
			this->logoutLabel->Size = System::Drawing::Size(135, 42);
			this->logoutLabel->TabIndex = 3;
			this->logoutLabel->Text = L"Log out";
			this->logoutLabel->Click += gcnew System::EventHandler(this, &Fantasy::logoutLabel_Click);
			// 
			// compLabel
			// 
			this->compLabel->AutoSize = true;
			this->compLabel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->compLabel->Font = (gcnew System::Drawing::Font(L"Radikal", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->compLabel->ForeColor = System::Drawing::Color::White;
			this->compLabel->Location = System::Drawing::Point(15, 170);
			this->compLabel->Name = L"compLabel";
			this->compLabel->Size = System::Drawing::Size(308, 42);
			this->compLabel->TabIndex = 2;
			this->compLabel->Text = L"Join a competition";
			// 
			// backArrow
			// 
			this->backArrow->BackColor = System::Drawing::Color::Transparent;
			this->backArrow->Cursor = System::Windows::Forms::Cursors::Hand;
			this->backArrow->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backArrow.Image")));
			this->backArrow->Location = System::Drawing::Point(18, 48);
			this->backArrow->Name = L"backArrow";
			this->backArrow->Size = System::Drawing::Size(111, 80);
			this->backArrow->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->backArrow->TabIndex = 1;
			this->backArrow->TabStop = false;
			this->backArrow->Click += gcnew System::EventHandler(this, &Fantasy::backArrow_Click);
			// 
			// menuIcon
			// 
			this->menuIcon->BackColor = System::Drawing::Color::Transparent;
			this->menuIcon->Cursor = System::Windows::Forms::Cursors::Hand;
			this->menuIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"menuIcon.Image")));
			this->menuIcon->Location = System::Drawing::Point(0, 39);
			this->menuIcon->Name = L"menuIcon";
			this->menuIcon->Size = System::Drawing::Size(100, 56);
			this->menuIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->menuIcon->TabIndex = 7;
			this->menuIcon->TabStop = false;
			this->menuIcon->Visible = false;
			this->menuIcon->Click += gcnew System::EventHandler(this, &Fantasy::menuIcon_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 50;
			this->timer1->Tick += gcnew System::EventHandler(this, &Fantasy::timer1_Tick);
			// 
			// transferMarketPanel
			// 
			this->transferMarketPanel->BackColor = System::Drawing::Color::Transparent;
			this->transferMarketPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"transferMarketPanel.BackgroundImage")));
			this->transferMarketPanel->Controls->Add(this->label17);
			this->transferMarketPanel->Controls->Add(this->label16);
			this->transferMarketPanel->Controls->Add(this->label15);
			this->transferMarketPanel->Controls->Add(this->playerList);
			this->transferMarketPanel->Controls->Add(this->label1);
			this->transferMarketPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->transferMarketPanel->Location = System::Drawing::Point(0, 0);
			this->transferMarketPanel->Name = L"transferMarketPanel";
			this->transferMarketPanel->Size = System::Drawing::Size(1262, 673);
			this->transferMarketPanel->TabIndex = 8;
			this->transferMarketPanel->Visible = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->label17->Location = System::Drawing::Point(443, 145);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(183, 25);
			this->label17->TabIndex = 27;
			this->label17->Text = L"Not enough budget.";
			this->label17->Visible = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->label16->Location = System::Drawing::Point(417, 145);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(253, 25);
			this->label16->TabIndex = 26;
			this->label16->Text = L"Player already in your team!";
			this->label16->Visible = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)));
			this->label15->Location = System::Drawing::Point(457, 145);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(138, 25);
			this->label15->TabIndex = 25;
			this->label15->Text = L"Player bought!";
			this->label15->Visible = false;
			// 
			// playerList
			// 
			this->playerList->AutoScroll = true;
			this->playerList->BackColor = System::Drawing::Color::Transparent;
			this->playerList->Location = System::Drawing::Point(62, 218);
			this->playerList->Margin = System::Windows::Forms::Padding(2);
			this->playerList->Name = L"playerList";
			this->playerList->Size = System::Drawing::Size(1149, 420);
			this->playerList->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Radikal", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(390, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(482, 75);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Transfer Market";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(0, 1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(813, 100);
			this->panel1->TabIndex = 0;
			// 
			// adminPage
			// 
			this->adminPage->BackColor = System::Drawing::SystemColors::Control;
			this->adminPage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"adminPage.BackgroundImage")));
			this->adminPage->Controls->Add(this->playersno);
			this->adminPage->Controls->Add(this->clubsno);
			this->adminPage->Controls->Add(this->leaguesno);
			this->adminPage->Controls->Add(this->adminsno);
			this->adminPage->Controls->Add(this->usersno);
			this->adminPage->Controls->Add(this->adminWelcome);
			this->adminPage->Dock = System::Windows::Forms::DockStyle::Fill;
			this->adminPage->Location = System::Drawing::Point(0, 0);
			this->adminPage->Name = L"adminPage";
			this->adminPage->Size = System::Drawing::Size(1262, 673);
			this->adminPage->TabIndex = 8;
			this->adminPage->Visible = false;
			// 
			// playersno
			// 
			this->playersno->AutoSize = true;
			this->playersno->BackColor = System::Drawing::Color::Transparent;
			this->playersno->Font = (gcnew System::Drawing::Font(L"Radikal", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->playersno->ForeColor = System::Drawing::Color::White;
			this->playersno->Location = System::Drawing::Point(525, 461);
			this->playersno->Name = L"playersno";
			this->playersno->Size = System::Drawing::Size(199, 59);
			this->playersno->TabIndex = 5;
			this->playersno->Text = L"Players:";
			this->playersno->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// clubsno
			// 
			this->clubsno->AutoSize = true;
			this->clubsno->BackColor = System::Drawing::Color::Transparent;
			this->clubsno->Font = (gcnew System::Drawing::Font(L"Radikal", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clubsno->ForeColor = System::Drawing::Color::White;
			this->clubsno->Location = System::Drawing::Point(781, 363);
			this->clubsno->Name = L"clubsno";
			this->clubsno->Size = System::Drawing::Size(171, 59);
			this->clubsno->TabIndex = 4;
			this->clubsno->Text = L"Clubs: ";
			this->clubsno->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// leaguesno
			// 
			this->leaguesno->AutoSize = true;
			this->leaguesno->BackColor = System::Drawing::Color::Transparent;
			this->leaguesno->Font = (gcnew System::Drawing::Font(L"Radikal", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->leaguesno->ForeColor = System::Drawing::Color::White;
			this->leaguesno->Location = System::Drawing::Point(749, 215);
			this->leaguesno->Name = L"leaguesno";
			this->leaguesno->Size = System::Drawing::Size(222, 59);
			this->leaguesno->TabIndex = 3;
			this->leaguesno->Text = L"Leagues:";
			this->leaguesno->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// adminsno
			// 
			this->adminsno->AutoSize = true;
			this->adminsno->BackColor = System::Drawing::Color::Transparent;
			this->adminsno->Font = (gcnew System::Drawing::Font(L"Radikal", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adminsno->ForeColor = System::Drawing::Color::White;
			this->adminsno->Location = System::Drawing::Point(293, 363);
			this->adminsno->Name = L"adminsno";
			this->adminsno->Size = System::Drawing::Size(204, 59);
			this->adminsno->TabIndex = 2;
			this->adminsno->Text = L"Admins:";
			this->adminsno->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// usersno
			// 
			this->usersno->AutoSize = true;
			this->usersno->BackColor = System::Drawing::Color::Transparent;
			this->usersno->Font = (gcnew System::Drawing::Font(L"Radikal", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usersno->ForeColor = System::Drawing::Color::White;
			this->usersno->Location = System::Drawing::Point(316, 215);
			this->usersno->Name = L"usersno";
			this->usersno->Size = System::Drawing::Size(156, 59);
			this->usersno->TabIndex = 1;
			this->usersno->Text = L"Users:";
			this->usersno->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// adminWelcome
			// 
			this->adminWelcome->AutoSize = true;
			this->adminWelcome->BackColor = System::Drawing::Color::Transparent;
			this->adminWelcome->Font = (gcnew System::Drawing::Font(L"Radikal", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adminWelcome->ForeColor = System::Drawing::Color::White;
			this->adminWelcome->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->adminWelcome->Location = System::Drawing::Point(526, 43);
			this->adminWelcome->Name = L"adminWelcome";
			this->adminWelcome->Size = System::Drawing::Size(210, 75);
			this->adminWelcome->TabIndex = 0;
			this->adminWelcome->Text = L"Basha";
			// 
			// adminMenuIcon
			// 
			this->adminMenuIcon->BackColor = System::Drawing::Color::Transparent;
			this->adminMenuIcon->Cursor = System::Windows::Forms::Cursors::Hand;
			this->adminMenuIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"adminMenuIcon.Image")));
			this->adminMenuIcon->Location = System::Drawing::Point(0, 39);
			this->adminMenuIcon->Name = L"adminMenuIcon";
			this->adminMenuIcon->Size = System::Drawing::Size(100, 56);
			this->adminMenuIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->adminMenuIcon->TabIndex = 8;
			this->adminMenuIcon->TabStop = false;
			this->adminMenuIcon->Visible = false;
			this->adminMenuIcon->Click += gcnew System::EventHandler(this, &Fantasy::adminMenuIcon_Click);
			// 
			// adminSidePanel
			// 
			this->adminSidePanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->adminSidePanel->Controls->Add(this->addLeagueOption);
			this->adminSidePanel->Controls->Add(this->mainPage);
			this->adminSidePanel->Controls->Add(this->noleagueerror);
			this->adminSidePanel->Controls->Add(this->noclubserror);
			this->adminSidePanel->Controls->Add(this->addClubOption);
			this->adminSidePanel->Controls->Add(this->admintransfermarketoption);
			this->adminSidePanel->Controls->Add(this->adminlogoutoption);
			this->adminSidePanel->Controls->Add(this->addPlayerOption);
			this->adminSidePanel->Controls->Add(this->collapsemenuButton);
			this->adminSidePanel->Cursor = System::Windows::Forms::Cursors::Default;
			this->adminSidePanel->Dock = System::Windows::Forms::DockStyle::Left;
			this->adminSidePanel->Location = System::Drawing::Point(10, 0);
			this->adminSidePanel->Name = L"adminSidePanel";
			this->adminSidePanel->Size = System::Drawing::Size(239, 673);
			this->adminSidePanel->TabIndex = 6;
			this->adminSidePanel->Visible = false;
			// 
			// addLeagueOption
			// 
			this->addLeagueOption->AutoSize = true;
			this->addLeagueOption->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addLeagueOption->Font = (gcnew System::Drawing::Font(L"Radikal", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addLeagueOption->ForeColor = System::Drawing::Color::White;
			this->addLeagueOption->Location = System::Drawing::Point(17, 410);
			this->addLeagueOption->Name = L"addLeagueOption";
			this->addLeagueOption->Size = System::Drawing::Size(221, 42);
			this->addLeagueOption->TabIndex = 19;
			this->addLeagueOption->Text = L"Add a league";
			this->addLeagueOption->Click += gcnew System::EventHandler(this, &Fantasy::addLeagueOption_Click);
			// 
			// mainPage
			// 
			this->mainPage->AutoSize = true;
			this->mainPage->Cursor = System::Windows::Forms::Cursors::Hand;
			this->mainPage->Font = (gcnew System::Drawing::Font(L"Radikal", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mainPage->ForeColor = System::Drawing::Color::White;
			this->mainPage->Location = System::Drawing::Point(17, 170);
			this->mainPage->Name = L"mainPage";
			this->mainPage->Size = System::Drawing::Size(181, 42);
			this->mainPage->TabIndex = 18;
			this->mainPage->Text = L"Main page";
			this->mainPage->Click += gcnew System::EventHandler(this, &Fantasy::mainPage_Click);
			// 
			// noleagueerror
			// 
			this->noleagueerror->AutoSize = true;
			this->noleagueerror->BackColor = System::Drawing::Color::Transparent;
			this->noleagueerror->Font = (gcnew System::Drawing::Font(L"Radikal Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->noleagueerror->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->noleagueerror->Location = System::Drawing::Point(20, 372);
			this->noleagueerror->Name = L"noleagueerror";
			this->noleagueerror->Size = System::Drawing::Size(135, 19);
			this->noleagueerror->TabIndex = 17;
			this->noleagueerror->Text = L"Add a league first!";
			this->noleagueerror->Visible = false;
			// 
			// noclubserror
			// 
			this->noclubserror->AutoSize = true;
			this->noclubserror->BackColor = System::Drawing::Color::Transparent;
			this->noclubserror->Font = (gcnew System::Drawing::Font(L"Radikal Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->noclubserror->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->noclubserror->Location = System::Drawing::Point(20, 292);
			this->noclubserror->Name = L"noclubserror";
			this->noclubserror->Size = System::Drawing::Size(117, 19);
			this->noclubserror->TabIndex = 16;
			this->noclubserror->Text = L"Add a club first!";
			this->noclubserror->Visible = false;
			// 
			// addClubOption
			// 
			this->addClubOption->AutoSize = true;
			this->addClubOption->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addClubOption->Font = (gcnew System::Drawing::Font(L"Radikal", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addClubOption->ForeColor = System::Drawing::Color::White;
			this->addClubOption->Location = System::Drawing::Point(15, 330);
			this->addClubOption->Name = L"addClubOption";
			this->addClubOption->Size = System::Drawing::Size(188, 42);
			this->addClubOption->TabIndex = 5;
			this->addClubOption->Text = L"Add a Club";
			this->addClubOption->Click += gcnew System::EventHandler(this, &Fantasy::addClubOption_Click);
			// 
			// admintransfermarketoption
			// 
			this->admintransfermarketoption->AutoSize = true;
			this->admintransfermarketoption->Cursor = System::Windows::Forms::Cursors::Hand;
			this->admintransfermarketoption->Font = (gcnew System::Drawing::Font(L"Radikal", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->admintransfermarketoption->ForeColor = System::Drawing::Color::White;
			this->admintransfermarketoption->Location = System::Drawing::Point(15, 490);
			this->admintransfermarketoption->Name = L"admintransfermarketoption";
			this->admintransfermarketoption->Size = System::Drawing::Size(266, 42);
			this->admintransfermarketoption->TabIndex = 4;
			this->admintransfermarketoption->Text = L"Transfer market";
			this->admintransfermarketoption->Click += gcnew System::EventHandler(this, &Fantasy::admintransfermarketoption_Click);
			// 
			// adminlogoutoption
			// 
			this->adminlogoutoption->AutoSize = true;
			this->adminlogoutoption->Cursor = System::Windows::Forms::Cursors::Hand;
			this->adminlogoutoption->Font = (gcnew System::Drawing::Font(L"Radikal", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adminlogoutoption->ForeColor = System::Drawing::Color::White;
			this->adminlogoutoption->Location = System::Drawing::Point(15, 570);
			this->adminlogoutoption->Name = L"adminlogoutoption";
			this->adminlogoutoption->Size = System::Drawing::Size(135, 42);
			this->adminlogoutoption->TabIndex = 3;
			this->adminlogoutoption->Text = L"Log out";
			this->adminlogoutoption->Click += gcnew System::EventHandler(this, &Fantasy::adminlogoutoption_Click);
			// 
			// addPlayerOption
			// 
			this->addPlayerOption->AutoSize = true;
			this->addPlayerOption->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addPlayerOption->Font = (gcnew System::Drawing::Font(L"Radikal", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addPlayerOption->ForeColor = System::Drawing::Color::White;
			this->addPlayerOption->Location = System::Drawing::Point(15, 250);
			this->addPlayerOption->Name = L"addPlayerOption";
			this->addPlayerOption->Size = System::Drawing::Size(213, 42);
			this->addPlayerOption->TabIndex = 2;
			this->addPlayerOption->Text = L"Add a player";
			this->addPlayerOption->Click += gcnew System::EventHandler(this, &Fantasy::addPlayerOption_Click);
			// 
			// collapsemenuButton
			// 
			this->collapsemenuButton->BackColor = System::Drawing::Color::Transparent;
			this->collapsemenuButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->collapsemenuButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"collapsemenuButton.Image")));
			this->collapsemenuButton->Location = System::Drawing::Point(18, 48);
			this->collapsemenuButton->Name = L"collapsemenuButton";
			this->collapsemenuButton->Size = System::Drawing::Size(111, 80);
			this->collapsemenuButton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->collapsemenuButton->TabIndex = 1;
			this->collapsemenuButton->TabStop = false;
			this->collapsemenuButton->Click += gcnew System::EventHandler(this, &Fantasy::collapsemenuButton_Click);
			// 
			// addPlayerPanel
			// 
			this->addPlayerPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addPlayerPanel.BackgroundImage")));
			this->addPlayerPanel->Controls->Add(this->playeraddsuccess);
			this->addPlayerPanel->Controls->Add(this->playeremptyfieldserror);
			this->addPlayerPanel->Controls->Add(this->playerexisterror);
			this->addPlayerPanel->Controls->Add(this->leagueoption);
			this->addPlayerPanel->Controls->Add(this->prevleaguebutton);
			this->addPlayerPanel->Controls->Add(this->nextleaguebutton);
			this->addPlayerPanel->Controls->Add(this->label8);
			this->addPlayerPanel->Controls->Add(this->label7);
			this->addPlayerPanel->Controls->Add(this->label6);
			this->addPlayerPanel->Controls->Add(this->addplayerbutton);
			this->addPlayerPanel->Controls->Add(this->prevclubbutton);
			this->addPlayerPanel->Controls->Add(this->nextclubbutton);
			this->addPlayerPanel->Controls->Add(this->clubchoiceimage);
			this->addPlayerPanel->Controls->Add(this->clubnamelabel);
			this->addPlayerPanel->Controls->Add(this->playerpostion);
			this->addPlayerPanel->Controls->Add(this->label5);
			this->addPlayerPanel->Controls->Add(this->playerPriceBox);
			this->addPlayerPanel->Controls->Add(this->playerNameBox);
			this->addPlayerPanel->Controls->Add(this->label3);
			this->addPlayerPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->addPlayerPanel->Location = System::Drawing::Point(10, 0);
			this->addPlayerPanel->Name = L"addPlayerPanel";
			this->addPlayerPanel->Size = System::Drawing::Size(1252, 673);
			this->addPlayerPanel->TabIndex = 2;
			this->addPlayerPanel->Visible = false;
			// 
			// playeraddsuccess
			// 
			this->playeraddsuccess->AutoSize = true;
			this->playeraddsuccess->BackColor = System::Drawing::Color::Transparent;
			this->playeraddsuccess->Font = (gcnew System::Drawing::Font(L"Radikal Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->playeraddsuccess->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)));
			this->playeraddsuccess->Location = System::Drawing::Point(562, 558);
			this->playeraddsuccess->Name = L"playeraddsuccess";
			this->playeraddsuccess->Size = System::Drawing::Size(138, 25);
			this->playeraddsuccess->TabIndex = 15;
			this->playeraddsuccess->Text = L"Player added!";
			this->playeraddsuccess->Visible = false;
			// 
			// playeremptyfieldserror
			// 
			this->playeremptyfieldserror->AutoSize = true;
			this->playeremptyfieldserror->BackColor = System::Drawing::Color::Transparent;
			this->playeremptyfieldserror->Font = (gcnew System::Drawing::Font(L"Radikal Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->playeremptyfieldserror->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->playeremptyfieldserror->Location = System::Drawing::Point(520, 558);
			this->playeremptyfieldserror->Name = L"playeremptyfieldserror";
			this->playeremptyfieldserror->Size = System::Drawing::Size(222, 25);
			this->playeremptyfieldserror->TabIndex = 14;
			this->playeremptyfieldserror->Text = L"Some fields are empty!";
			this->playeremptyfieldserror->Visible = false;
			// 
			// playerexisterror
			// 
			this->playerexisterror->AutoSize = true;
			this->playerexisterror->BackColor = System::Drawing::Color::Transparent;
			this->playerexisterror->Font = (gcnew System::Drawing::Font(L"Radikal Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->playerexisterror->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->playerexisterror->Location = System::Drawing::Point(528, 559);
			this->playerexisterror->Name = L"playerexisterror";
			this->playerexisterror->Size = System::Drawing::Size(205, 25);
			this->playerexisterror->TabIndex = 13;
			this->playerexisterror->Text = L"Player already exists!";
			this->playerexisterror->Visible = false;
			// 
			// leagueoption
			// 
			this->leagueoption->AutoSize = true;
			this->leagueoption->BackColor = System::Drawing::Color::Transparent;
			this->leagueoption->Font = (gcnew System::Drawing::Font(L"Radikal Medium", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->leagueoption->ForeColor = System::Drawing::Color::White;
			this->leagueoption->Location = System::Drawing::Point(517, 288);
			this->leagueoption->Name = L"leagueoption";
			this->leagueoption->Size = System::Drawing::Size(228, 42);
			this->leagueoption->TabIndex = 10;
			this->leagueoption->Text = L"Leaguename";
			// 
			// prevleaguebutton
			// 
			this->prevleaguebutton->BackColor = System::Drawing::Color::Transparent;
			this->prevleaguebutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->prevleaguebutton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"prevleaguebutton.Image")));
			this->prevleaguebutton->Location = System::Drawing::Point(411, 299);
			this->prevleaguebutton->Name = L"prevleaguebutton";
			this->prevleaguebutton->Size = System::Drawing::Size(86, 28);
			this->prevleaguebutton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->prevleaguebutton->TabIndex = 12;
			this->prevleaguebutton->TabStop = false;
			this->prevleaguebutton->Click += gcnew System::EventHandler(this, &Fantasy::prevleaguebutton_Click);
			// 
			// nextleaguebutton
			// 
			this->nextleaguebutton->BackColor = System::Drawing::Color::Transparent;
			this->nextleaguebutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->nextleaguebutton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nextleaguebutton.Image")));
			this->nextleaguebutton->Location = System::Drawing::Point(770, 299);
			this->nextleaguebutton->Name = L"nextleaguebutton";
			this->nextleaguebutton->Size = System::Drawing::Size(86, 28);
			this->nextleaguebutton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->nextleaguebutton->TabIndex = 11;
			this->nextleaguebutton->TabStop = false;
			this->nextleaguebutton->Click += gcnew System::EventHandler(this, &Fantasy::nextleaguebutton_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Radikal Medium", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(650, 233);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(93, 42);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Pos :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Radikal Medium", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(245, 235);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(117, 42);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Price :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Radikal Medium", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(228, 129);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(131, 42);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Name :";
			// 
			// addplayerbutton
			// 
			this->addplayerbutton->BackColor = System::Drawing::Color::White;
			this->addplayerbutton->Font = (gcnew System::Drawing::Font(L"Radikal", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addplayerbutton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->addplayerbutton->Location = System::Drawing::Point(519, 586);
			this->addplayerbutton->Name = L"addplayerbutton";
			this->addplayerbutton->Size = System::Drawing::Size(223, 67);
			this->addplayerbutton->TabIndex = 6;
			this->addplayerbutton->Text = L"Add";
			this->addplayerbutton->UseVisualStyleBackColor = false;
			this->addplayerbutton->Click += gcnew System::EventHandler(this, &Fantasy::addplayerbutton_Click);
			// 
			// prevclubbutton
			// 
			this->prevclubbutton->BackColor = System::Drawing::Color::Transparent;
			this->prevclubbutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->prevclubbutton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"prevclubbutton.Image")));
			this->prevclubbutton->Location = System::Drawing::Point(426, 412);
			this->prevclubbutton->Name = L"prevclubbutton";
			this->prevclubbutton->Size = System::Drawing::Size(86, 50);
			this->prevclubbutton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->prevclubbutton->TabIndex = 8;
			this->prevclubbutton->TabStop = false;
			this->prevclubbutton->Click += gcnew System::EventHandler(this, &Fantasy::backchoicebutton_Click);
			// 
			// nextclubbutton
			// 
			this->nextclubbutton->BackColor = System::Drawing::Color::Transparent;
			this->nextclubbutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->nextclubbutton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nextclubbutton.Image")));
			this->nextclubbutton->Location = System::Drawing::Point(755, 412);
			this->nextclubbutton->Name = L"nextclubbutton";
			this->nextclubbutton->Size = System::Drawing::Size(86, 50);
			this->nextclubbutton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->nextclubbutton->TabIndex = 7;
			this->nextclubbutton->TabStop = false;
			this->nextclubbutton->Click += gcnew System::EventHandler(this, &Fantasy::nextchoicebutton_Click);
			// 
			// clubchoiceimage
			// 
			this->clubchoiceimage->BackColor = System::Drawing::Color::Transparent;
			this->clubchoiceimage->Location = System::Drawing::Point(526, 333);
			this->clubchoiceimage->Name = L"clubchoiceimage";
			this->clubchoiceimage->Size = System::Drawing::Size(209, 180);
			this->clubchoiceimage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->clubchoiceimage->TabIndex = 1;
			this->clubchoiceimage->TabStop = false;
			// 
			// clubnamelabel
			// 
			this->clubnamelabel->AutoSize = true;
			this->clubnamelabel->BackColor = System::Drawing::Color::Transparent;
			this->clubnamelabel->Font = (gcnew System::Drawing::Font(L"Radikal Medium", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clubnamelabel->ForeColor = System::Drawing::Color::White;
			this->clubnamelabel->Location = System::Drawing::Point(548, 516);
			this->clubnamelabel->Name = L"clubnamelabel";
			this->clubnamelabel->Size = System::Drawing::Size(178, 42);
			this->clubnamelabel->TabIndex = 0;
			this->clubnamelabel->Text = L"clubname";
			// 
			// playerpostion
			// 
			this->playerpostion->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->playerpostion->Font = (gcnew System::Drawing::Font(L"Radikal Light", 18));
			this->playerpostion->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->playerpostion->FormattingEnabled = true;
			this->playerpostion->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"ATT", L"MID", L"DEF", L"GK" });
			this->playerpostion->Location = System::Drawing::Point(754, 233);
			this->playerpostion->Name = L"playerpostion";
			this->playerpostion->Size = System::Drawing::Size(121, 46);
			this->playerpostion->TabIndex = 4;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Radikal", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(462, 12);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(337, 75);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Player info";
			// 
			// playerPriceBox
			// 
			this->playerPriceBox->Font = (gcnew System::Drawing::Font(L"Radikal Light", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->playerPriceBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->playerPriceBox->Location = System::Drawing::Point(386, 233);
			this->playerPriceBox->Name = L"playerPriceBox";
			this->playerPriceBox->Size = System::Drawing::Size(180, 45);
			this->playerPriceBox->TabIndex = 1;
			// 
			// playerNameBox
			// 
			this->playerNameBox->Font = (gcnew System::Drawing::Font(L"Radikal Light", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->playerNameBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->playerNameBox->Location = System::Drawing::Point(386, 129);
			this->playerNameBox->Name = L"playerNameBox";
			this->playerNameBox->Size = System::Drawing::Size(489, 45);
			this->playerNameBox->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Radikal Medium", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(568, 236);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 38);
			this->label3->TabIndex = 2;
			this->label3->Text = L"x 1k";
			// 
			// timer2
			// 
			this->timer2->Interval = 50;
			this->timer2->Tick += gcnew System::EventHandler(this, &Fantasy::timer2_Tick);
			// 
			// addLeaguePanel
			// 
			this->addLeaguePanel->BackColor = System::Drawing::Color::DimGray;
			this->addLeaguePanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addLeaguePanel.BackgroundImage")));
			this->addLeaguePanel->Controls->Add(this->leagueemptyfieldserror);
			this->addLeaguePanel->Controls->Add(this->leagueaddsuccess);
			this->addLeaguePanel->Controls->Add(this->leagueexisterror);
			this->addLeaguePanel->Controls->Add(this->addleaguebutton);
			this->addLeaguePanel->Controls->Add(this->label12);
			this->addLeaguePanel->Controls->Add(this->leaguenamebox);
			this->addLeaguePanel->Controls->Add(this->label9);
			this->addLeaguePanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->addLeaguePanel->Location = System::Drawing::Point(0, 0);
			this->addLeaguePanel->Name = L"addLeaguePanel";
			this->addLeaguePanel->Size = System::Drawing::Size(1262, 673);
			this->addLeaguePanel->TabIndex = 16;
			this->addLeaguePanel->Visible = false;
			// 
			// leagueemptyfieldserror
			// 
			this->leagueemptyfieldserror->AutoSize = true;
			this->leagueemptyfieldserror->BackColor = System::Drawing::Color::Transparent;
			this->leagueemptyfieldserror->Font = (gcnew System::Drawing::Font(L"Radikal Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->leagueemptyfieldserror->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->leagueemptyfieldserror->Location = System::Drawing::Point(519, 422);
			this->leagueemptyfieldserror->Name = L"leagueemptyfieldserror";
			this->leagueemptyfieldserror->Size = System::Drawing::Size(222, 25);
			this->leagueemptyfieldserror->TabIndex = 17;
			this->leagueemptyfieldserror->Text = L"Some fields are empty!";
			this->leagueemptyfieldserror->Visible = false;
			// 
			// leagueaddsuccess
			// 
			this->leagueaddsuccess->AutoSize = true;
			this->leagueaddsuccess->BackColor = System::Drawing::Color::Transparent;
			this->leagueaddsuccess->Font = (gcnew System::Drawing::Font(L"Radikal Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->leagueaddsuccess->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)));
			this->leagueaddsuccess->Location = System::Drawing::Point(560, 422);
			this->leagueaddsuccess->Name = L"leagueaddsuccess";
			this->leagueaddsuccess->Size = System::Drawing::Size(149, 25);
			this->leagueaddsuccess->TabIndex = 16;
			this->leagueaddsuccess->Text = L"League added!";
			this->leagueaddsuccess->Visible = false;
			// 
			// leagueexisterror
			// 
			this->leagueexisterror->AutoSize = true;
			this->leagueexisterror->BackColor = System::Drawing::Color::Transparent;
			this->leagueexisterror->Font = (gcnew System::Drawing::Font(L"Radikal Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->leagueexisterror->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->leagueexisterror->Location = System::Drawing::Point(523, 422);
			this->leagueexisterror->Name = L"leagueexisterror";
			this->leagueexisterror->Size = System::Drawing::Size(216, 25);
			this->leagueexisterror->TabIndex = 14;
			this->leagueexisterror->Text = L"League already exists!";
			this->leagueexisterror->Visible = false;
			// 
			// addleaguebutton
			// 
			this->addleaguebutton->BackColor = System::Drawing::Color::White;
			this->addleaguebutton->Font = (gcnew System::Drawing::Font(L"Radikal", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addleaguebutton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->addleaguebutton->Location = System::Drawing::Point(519, 451);
			this->addleaguebutton->Name = L"addleaguebutton";
			this->addleaguebutton->Size = System::Drawing::Size(223, 67);
			this->addleaguebutton->TabIndex = 9;
			this->addleaguebutton->Text = L"Add";
			this->addleaguebutton->UseVisualStyleBackColor = false;
			this->addleaguebutton->Click += gcnew System::EventHandler(this, &Fantasy::addleaguebutton_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Radikal Medium", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(252, 269);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(131, 42);
			this->label12->TabIndex = 8;
			this->label12->Text = L"Name :";
			// 
			// leaguenamebox
			// 
			this->leaguenamebox->Font = (gcnew System::Drawing::Font(L"Radikal Light", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->leaguenamebox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->leaguenamebox->Location = System::Drawing::Point(386, 266);
			this->leaguenamebox->Name = L"leaguenamebox";
			this->leaguenamebox->Size = System::Drawing::Size(489, 45);
			this->leaguenamebox->TabIndex = 5;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Radikal", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(462, 43);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(365, 75);
			this->label9->TabIndex = 4;
			this->label9->Text = L"League info";
			// 
			// addClubPanel
			// 
			this->addClubPanel->BackColor = System::Drawing::Color::Transparent;
			this->addClubPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addClubPanel.BackgroundImage")));
			this->addClubPanel->Controls->Add(this->clubaddsuccess);
			this->addClubPanel->Controls->Add(this->clubemptyfieldserror);
			this->addClubPanel->Controls->Add(this->clubexisterror);
			this->addClubPanel->Controls->Add(this->menuIcon);
			this->addClubPanel->Controls->Add(this->addclubbutton);
			this->addClubPanel->Controls->Add(this->prevleaguechoice);
			this->addClubPanel->Controls->Add(this->nextleaguechoice);
			this->addClubPanel->Controls->Add(this->leaguechoiceimage);
			this->addClubPanel->Controls->Add(this->leaguename);
			this->addClubPanel->Controls->Add(this->label14);
			this->addClubPanel->Controls->Add(this->clubnamebox);
			this->addClubPanel->Controls->Add(this->label13);
			this->addClubPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->addClubPanel->Location = System::Drawing::Point(0, 0);
			this->addClubPanel->Name = L"addClubPanel";
			this->addClubPanel->Size = System::Drawing::Size(1262, 673);
			this->addClubPanel->TabIndex = 18;
			this->addClubPanel->Visible = false;
			// 
			// clubaddsuccess
			// 
			this->clubaddsuccess->AutoSize = true;
			this->clubaddsuccess->BackColor = System::Drawing::Color::Transparent;
			this->clubaddsuccess->Font = (gcnew System::Drawing::Font(L"Radikal Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clubaddsuccess->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)));
			this->clubaddsuccess->Location = System::Drawing::Point(569, 533);
			this->clubaddsuccess->Name = L"clubaddsuccess";
			this->clubaddsuccess->Size = System::Drawing::Size(123, 25);
			this->clubaddsuccess->TabIndex = 23;
			this->clubaddsuccess->Text = L"Club added!";
			this->clubaddsuccess->Visible = false;
			// 
			// clubemptyfieldserror
			// 
			this->clubemptyfieldserror->AutoSize = true;
			this->clubemptyfieldserror->BackColor = System::Drawing::Color::Transparent;
			this->clubemptyfieldserror->Font = (gcnew System::Drawing::Font(L"Radikal Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clubemptyfieldserror->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->clubemptyfieldserror->Location = System::Drawing::Point(513, 533);
			this->clubemptyfieldserror->Name = L"clubemptyfieldserror";
			this->clubemptyfieldserror->Size = System::Drawing::Size(222, 25);
			this->clubemptyfieldserror->TabIndex = 22;
			this->clubemptyfieldserror->Text = L"Some fields are empty!";
			this->clubemptyfieldserror->Visible = false;
			// 
			// clubexisterror
			// 
			this->clubexisterror->AutoSize = true;
			this->clubexisterror->BackColor = System::Drawing::Color::Transparent;
			this->clubexisterror->Font = (gcnew System::Drawing::Font(L"Radikal Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clubexisterror->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->clubexisterror->Location = System::Drawing::Point(536, 534);
			this->clubexisterror->Name = L"clubexisterror";
			this->clubexisterror->Size = System::Drawing::Size(190, 25);
			this->clubexisterror->TabIndex = 21;
			this->clubexisterror->Text = L"Club already exists!";
			this->clubexisterror->Visible = false;
			// 
			// addclubbutton
			// 
			this->addclubbutton->BackColor = System::Drawing::Color::White;
			this->addclubbutton->Font = (gcnew System::Drawing::Font(L"Radikal", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addclubbutton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->addclubbutton->Location = System::Drawing::Point(512, 561);
			this->addclubbutton->Name = L"addclubbutton";
			this->addclubbutton->Size = System::Drawing::Size(223, 67);
			this->addclubbutton->TabIndex = 18;
			this->addclubbutton->Text = L"Add";
			this->addclubbutton->UseVisualStyleBackColor = false;
			this->addclubbutton->Click += gcnew System::EventHandler(this, &Fantasy::addclubbutton_Click);
			// 
			// prevleaguechoice
			// 
			this->prevleaguechoice->BackColor = System::Drawing::Color::Transparent;
			this->prevleaguechoice->Cursor = System::Windows::Forms::Cursors::Hand;
			this->prevleaguechoice->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"prevleaguechoice.Image")));
			this->prevleaguechoice->Location = System::Drawing::Point(422, 348);
			this->prevleaguechoice->Name = L"prevleaguechoice";
			this->prevleaguechoice->Size = System::Drawing::Size(86, 50);
			this->prevleaguechoice->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->prevleaguechoice->TabIndex = 20;
			this->prevleaguechoice->TabStop = false;
			this->prevleaguechoice->Click += gcnew System::EventHandler(this, &Fantasy::prevleaguechoice_Click);
			// 
			// nextleaguechoice
			// 
			this->nextleaguechoice->BackColor = System::Drawing::Color::Transparent;
			this->nextleaguechoice->Cursor = System::Windows::Forms::Cursors::Hand;
			this->nextleaguechoice->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nextleaguechoice.Image")));
			this->nextleaguechoice->Location = System::Drawing::Point(753, 348);
			this->nextleaguechoice->Name = L"nextleaguechoice";
			this->nextleaguechoice->Size = System::Drawing::Size(86, 50);
			this->nextleaguechoice->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->nextleaguechoice->TabIndex = 19;
			this->nextleaguechoice->TabStop = false;
			this->nextleaguechoice->Click += gcnew System::EventHandler(this, &Fantasy::nextleaguechoice_Click);
			// 
			// leaguechoiceimage
			// 
			this->leaguechoiceimage->BackColor = System::Drawing::Color::Transparent;
			this->leaguechoiceimage->Location = System::Drawing::Point(526, 269);
			this->leaguechoiceimage->Name = L"leaguechoiceimage";
			this->leaguechoiceimage->Size = System::Drawing::Size(209, 180);
			this->leaguechoiceimage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->leaguechoiceimage->TabIndex = 17;
			this->leaguechoiceimage->TabStop = false;
			// 
			// leaguename
			// 
			this->leaguename->AutoSize = true;
			this->leaguename->BackColor = System::Drawing::Color::Transparent;
			this->leaguename->Font = (gcnew System::Drawing::Font(L"Radikal Medium", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->leaguename->ForeColor = System::Drawing::Color::White;
			this->leaguename->Location = System::Drawing::Point(521, 452);
			this->leaguename->Name = L"leaguename";
			this->leaguename->Size = System::Drawing::Size(219, 42);
			this->leaguename->TabIndex = 16;
			this->leaguename->Text = L"leaguename";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Radikal Medium", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(235, 194);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(131, 42);
			this->label14->TabIndex = 9;
			this->label14->Text = L"Name :";
			// 
			// clubnamebox
			// 
			this->clubnamebox->Font = (gcnew System::Drawing::Font(L"Radikal Light", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clubnamebox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->clubnamebox->Location = System::Drawing::Point(382, 194);
			this->clubnamebox->Name = L"clubnamebox";
			this->clubnamebox->Size = System::Drawing::Size(489, 45);
			this->clubnamebox->TabIndex = 6;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Radikal", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(487, 32);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(287, 75);
			this->label13->TabIndex = 5;
			this->label13->Text = L"Club info";
			// 
			// Fantasy
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1262, 673);
			this->Controls->Add(this->adminSidePanel);
			this->Controls->Add(this->adminMenuIcon);
			this->Controls->Add(this->addPlayerPanel);
			this->Controls->Add(this->sidePanel);
			this->Controls->Add(this->adminPage);
			this->Controls->Add(this->addClubPanel);
			this->Controls->Add(this->addLeaguePanel);
			this->Controls->Add(this->transferMarketPanel);
			this->Controls->Add(this->homePage);
			this->Controls->Add(this->loginPage);
			this->Controls->Add(this->signupPage);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Fantasy";
			this->Text = L"Premier League: Fantasy";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Fantasy::Fantasy_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Fantasy::Fantasy_Load);
			this->loginPage->ResumeLayout(false);
			this->loginPage->PerformLayout();
			this->signupPage->ResumeLayout(false);
			this->signupPage->PerformLayout();
			this->homePage->ResumeLayout(false);
			this->homePage->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->sidePanel->ResumeLayout(false);
			this->sidePanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backArrow))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->menuIcon))->EndInit();
			this->transferMarketPanel->ResumeLayout(false);
			this->transferMarketPanel->PerformLayout();
			this->adminPage->ResumeLayout(false);
			this->adminPage->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->adminMenuIcon))->EndInit();
			this->adminSidePanel->ResumeLayout(false);
			this->adminSidePanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->collapsemenuButton))->EndInit();
			this->addPlayerPanel->ResumeLayout(false);
			this->addPlayerPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->prevleaguebutton))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nextleaguebutton))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->prevclubbutton))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nextclubbutton))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->clubchoiceimage))->EndInit();
			this->addLeaguePanel->ResumeLayout(false);
			this->addLeaguePanel->PerformLayout();
			this->addClubPanel->ResumeLayout(false);
			this->addClubPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->prevleaguechoice))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nextleaguechoice))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->leaguechoiceimage))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
		Panel^ SelectedTab;

		

	private: System::Void Fantasy_Load(System::Object^ sender, System::EventArgs^ e)
	{
		readFile();

		SelectTab(loginPage);

		//auto login
		//userNameBox->Text = "Cover";
		//passwordBox->Text = "777";
		//loginButton_Click(nullptr, nullptr);
	}

	private: System::Void SelectTab(Panel^ tab)
	{
		if (SelectedTab != nullptr)
			SelectedTab->Hide();

		tab->Show();
		SelectedTab = tab;
	}

	private: System::Void loginButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		msclr::interop::marshal_context context;
		std::string username = context.marshal_as<std::string>(userNameBox->Text);
		std::string password = context.marshal_as<std::string>(passwordBox->Text);

		bool loggedin = false;
		for (int i = 0; i < Admins.size(); i++)
		{

			if (username == Admins[i].adminName)
			{
				
				if (password == Admins[i].password)
				{
					currentAdmin = Admins[i];

					SelectTab(adminPage);
					adminMenuIcon->Parent = adminPage;

					adminWelcome->Text = cppToSystem(username) + " Basha";
					adminWelcome->Location = Point((962 - TextRenderer::MeasureText(adminWelcome->Text, adminWelcome->Font).Width) / 2, adminWelcome->Location.Y);
					adminWelcome->Location.X = 0;

					usersno->Text = "Users\n" + Users.size();
					adminsno->Text = "Admins\n" + Admins.size();
					leaguesno->Text = "Leagues\n" + Leagues.size();
					clubsno->Text = "Clubs\n" + Clubs.size();
					playersno->Text = "Players\n" + Players.size();

					loggedin = true;
					loginErrorText->Hide();
					adminMenuIcon->Show();
									
					userNameBox->Clear();
					passwordBox->Clear();
					return;
				}

			}

		}

		if (!loggedin)
		{
			for (int i = 0; i < Users.size(); i++)
			{
				if (username == Users[i].userName)
				{
					if (password == Users[i].password)
					{
						helloLabel->Text = "Hello " + cppToSystem(username);

						currentUser = Users[i];

						SelectTab(homePage);
						
						loginErrorText->Hide();						
						menuIcon->Show();
						menuIcon->Parent = homePage;
						
						userNameBox->Clear();
						passwordBox->Clear();
						
						return;
					}
				}
			}
			loginErrorText->Show();
		}
	}

	private: System::Void signUpLinkText_Click(System::Object^ sender, System::EventArgs^ e)
	{
		SelectTab(signupPage);
		loginErrorText->Hide();
		userNameBox->Clear();
		passwordBox->Clear();

	}

	private: System::Void signupButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		msclr::interop::marshal_context context;
		std::string username = context.marshal_as<std::string>(userNameSignUpBox->Text);
		std::string password = context.marshal_as<std::string>(passwordSignUpBox->Text);
		int id = System::Int32::Parse(IDBox->Text);
		if (!adminSignUpbox->Checked)
		{
			for (int i = 0; i < Users.size(); i++)
			{
				if (username == Users[i].userName)
				{

					userExistLabel->Show();
					break;
				}

			}
			User os;
			os.userName = username;
			os.password = password;
			os.id = int(id);
			Users.push_back(os);
		}
		else if (adminSignUpbox->Checked)
		{
			for (int i = 0; i < Admins.size(); i++)
			{
				if (username == Admins[i].adminName)
				{
					MessageBox::Show("This admin already exists!");
					break;
				}
			}
			Admin os;
			os.adminName = username;
			os.password = password;
			Admins.push_back(os);
		}
		SelectTab(loginPage);
	}

	private: System::Void Fantasy_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
	{
		writeFile();
	}

	private: System::Void signupBack_Click(System::Object^ sender, System::EventArgs^ e)
	{
		SelectTab(loginPage);
	}

	private: System::Void menuIcon_Click(System::Object^ sender, System::EventArgs^ e)
	{
		sidePanel->Show();
		timer1->Start();
	}

	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e)
	{
		if (sidePanel->Width < 290)
		{
			sidePanel->Width += 70;
		}
		else
		{
			timer1->Stop();
			backArrow->Show();
		}
	}

	private: System::Void homePage_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
	{
		collapse(sidePanel);
	}

	private: System::Void backArrow_Click(System::Object^ sender, System::EventArgs^ e)
	{
		collapse(sidePanel);
	}
		   
	private: System::Void logoutLabel_Click(System::Object^ sender, System::EventArgs^ e)
	{
		SelectTab(loginPage);
		collapse(sidePanel);
	}

		   Color GetPositionColor(std::string pos)
		   {
			   if (pos == "DEF")
				   return Color::FromArgb(0, 192, 192);
			   else if (pos == "MID")
				   return Color::FromArgb(240, 179, 0);
			   else if (pos == "GK")
				   return Color::Green;
			   return Color::FromArgb(192, 0, 0);
		   }

		   Panel^ GetPlayerPanel(Player& player, int idx)
		   {
			   String^ playername = gcnew String(player.name.c_str());

			   Panel^ panel = gcnew Panel();
			   Label^ NameLabel = gcnew Label();
			   Label^ PositionLabel = gcnew Label();
			   Label^ PriceLabel = gcnew Label();
			   PictureBox^ PlayerPicture = gcnew PictureBox();
			   PictureBox^ ClubPicture = gcnew PictureBox();
			   PictureBox^ LeaguePicture = gcnew PictureBox();
			   Label^ BuyBtn = gcnew Label();

			   // 
			   // PlayerPicture
			   // 
			   PlayerPicture->Location = System::Drawing::Point(12, 8);
			   PlayerPicture->Name = L"PlayerPicture";
			   PlayerPicture->Size = System::Drawing::Size(60, 60);
			   PlayerPicture->TabIndex = 0;
			   PlayerPicture->TabStop = false;
			   PlayerPicture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;

			   try
			   {
				   PlayerPicture->Image = Image::FromFile(String::Format("players/{0}.png", playername));
			   }
			   catch (...)
			   {
				   PlayerPicture->Image = Image::FromFile("placeholder.jpg");
			   }

			   // 
			   // ClubPicture
			   // 
			   ClubPicture->Location = System::Drawing::Point(478, 8);
			   ClubPicture->Name = L"ClubPicture";
			   ClubPicture->Size = System::Drawing::Size(60, 60);
			   ClubPicture->TabIndex = 1;
			   ClubPicture->TabStop = false;
			   ClubPicture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;

			   try
			   {
				   ClubPicture->Image = Image::FromFile(String::Format("{0}.png", gcnew String(player.club->name.c_str())));
			   }
			   catch (...)
			   {
				   ClubPicture->Image = Image::FromFile("clubplaceholder.png");
			   }

			   // 
			   // LeaguePicture
			   // 
			   LeaguePicture->Location = System::Drawing::Point(407, 8);
			   LeaguePicture->Name = L"LeaguePicture";
			   LeaguePicture->Size = System::Drawing::Size(60, 60);
			   LeaguePicture->TabIndex = 2;
			   LeaguePicture->TabStop = false;
			   LeaguePicture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;

			   try
			   {
				   LeaguePicture->Image = Image::FromFile(String::Format("{0}.png", gcnew String(player.club->league->name.c_str())));
			   }
			   catch (...)
			   {
				   LeaguePicture->Image = Image::FromFile("leagueplaceholder.png");
			   }

			   // 
			   // NameLabel
			   // 
			   NameLabel->AutoSize = true;
			   NameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   NameLabel->Location = System::Drawing::Point(80, 13);
			   NameLabel->MaximumSize = System::Drawing::Size(200, 0);
			   NameLabel->Name = L"NameLabel";
			   NameLabel->Size = System::Drawing::Size(128, 22);
			   NameLabel->TabIndex = 3;
			   NameLabel->Text = playername;

			   // 
			   // PositionLabel
			   // 
			   PositionLabel->AutoSize = true;
			   PositionLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   PositionLabel->ForeColor = GetPositionColor(player.position);
			   PositionLabel->Location = System::Drawing::Point(81, 43);
			   PositionLabel->Name = L"PositionLabel";
			   PositionLabel->Size = System::Drawing::Size(37, 16);
			   PositionLabel->TabIndex = 4;
			   PositionLabel->Text = gcnew String(player.position.c_str());

			   // 
			   // PriceLabel
			   // 
			   PriceLabel->AutoSize = true;
			   PriceLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   PriceLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				   static_cast<System::Int32>(static_cast<System::Byte>(64)));
			   PriceLabel->Location = System::Drawing::Point(278, 12);
			   PriceLabel->Name = L"PriceLabel";
			   PriceLabel->Size = System::Drawing::Size(52, 48);
			   PriceLabel->TabIndex = 5;
			   PriceLabel->Text = String::Format("{0}\r\nEGP", player.price);

			   // 
			   // BuyBtn
			   // 
			   BuyBtn->AutoSize = true;
			   BuyBtn->Font = (gcnew System::Drawing::Font(L"Microsoft PhagsPa", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold)),
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   BuyBtn->ForeColor = System::Drawing::Color::FromArgb(55, 0, 60);
			   BuyBtn->Location = System::Drawing::Point(550, 16);
			   BuyBtn->Name = playername;
			   BuyBtn->Size = System::Drawing::Size(68, 38);
			   BuyBtn->TabIndex = 6;
			   BuyBtn->Text = L"Buy";
			   BuyBtn->Click += gcnew System::EventHandler(this, &Fantasy::TransferMarketBuy_Click);

			   // 
			   // panel
			   // 
			   panel->BackColor = System::Drawing::Color::White;
			   panel->Location = System::Drawing::Point(126, 3);
			   panel->Margin = System::Windows::Forms::Padding(126, 3, 3, 3);
			   panel->Size = System::Drawing::Size(635, 77);
			   panel->Controls->Add(NameLabel);
			   panel->Controls->Add(PositionLabel);
			   panel->Controls->Add(PriceLabel);
			   panel->Controls->Add(PlayerPicture);
			   panel->Controls->Add(ClubPicture);
			   panel->Controls->Add(LeaguePicture);
			   panel->Controls->Add(BuyBtn);

			   return panel;
		   }
	
	private: System::Void transferMarketButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		menuIcon->Parent = transferMarketPanel;
		SelectTab(transferMarketPanel);
		collapse(sidePanel);

		playerList->Controls->Clear();

		int i = 0;
		for (auto it = Players.begin(); it != Players.end(); ++it, ++i)
			playerList->Controls->Add(GetPlayerPanel(it->second, i));

	}

	private: System::Void adminMenuIcon_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		adminSidePanel->Show();
		timer2->Start();
	}
	
	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) 
	{
		if (adminSidePanel->Width < 290)
		{
			adminSidePanel->Width += 70;
		}
		else
		{
			timer2->Stop();
			collapsemenuButton->Show();
		}
	}
	
	private: System::Void collapsemenuButton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		collapse(adminSidePanel);
	}
	
		   int leaguecounter;
		   int counter;

	private: System::Void addPlayerOption_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (!Clubs.empty())
		{
			leaguecounter = 0;
			counter = 0;
			
			noclubserror->Hide();

			collapse(adminSidePanel);
			adminMenuIcon->Parent = addPlayerPanel;

			SelectTab(addPlayerPanel);

			leagueoption->Text = cppToSystem(Leagues[leaguecounter].name);
			leagueoption->Location = centralize(leagueoption);

			while (Clubs[counter].league->name != Leagues[leaguecounter].name)
			{
				counter = (counter + 1) % Clubs.size();
			}

			clubnamelabel->Text = cppToSystem(Clubs[counter].name);
			clubnamelabel->Location = centralize(clubnamelabel);

			try
			{
				clubchoiceimage->Image = Image::FromFile(cppToSystem(Clubs[counter].name) + ".png");
			}
			catch (...)
			{
				clubchoiceimage->Image = Image::FromFile("clubplaceholder.png");
			}
		}
		else
		{
			noclubserror->Show();
		}
	}

	private: System::Void nextchoicebutton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int i = (counter + 1) % Clubs.size();
		while(true)
		{ 		
			if (Clubs[i].league->name == Leagues[leaguecounter].name)
			{
				counter = i;
				break;
			}	
			i = (i + 1) % Clubs.size();
		}

		clubnamelabel->Text = cppToSystem(Clubs[counter].name);
		clubnamelabel->Location = centralize(clubnamelabel);

		try
		{
			clubchoiceimage->Image = Image::FromFile(cppToSystem(Clubs[counter].name) + ".png");
		}
		catch (...)
		{
			clubchoiceimage->Image = Image::FromFile("clubplaceholder.png");
		}

	}

	private: System::Void backchoicebutton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int i = counter ? counter - 1 : Clubs.size() - 1;
		while (i >= 0 && i < Clubs.size())
		{
			if (Clubs[i].league->name == Leagues[leaguecounter].name)
			{
				counter = i;
				break;
			}
			i--;
		}

		clubnamelabel->Text = cppToSystem(Clubs[counter].name);
		clubnamelabel->Location = centralize(clubnamelabel);

		try
		{
			clubchoiceimage->Image = Image::FromFile(cppToSystem(Clubs[counter].name) + ".png");
		}
		catch (...)
		{
			clubchoiceimage->Image = Image::FromFile("clubplaceholder.png");
		}
	}

	private: System::Void nextleaguebutton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		leaguecounter = (leaguecounter + 1) % Leagues.size();

		leagueoption->Text = cppToSystem(Leagues[leaguecounter].name);
		leagueoption->Location = centralize(leagueoption);

		for (int i = 0; i < Clubs.size(); i++)
		{
			if (Clubs[i].league->name == Leagues[leaguecounter].name)
			{
				counter = i;
				break;
			}
		}

		clubnamelabel->Text = cppToSystem(Clubs[counter].name);
		clubnamelabel->Location = centralize(clubnamelabel);

		try
		{
			clubchoiceimage->Image = Image::FromFile(cppToSystem(Clubs[counter].name) + ".png");
		}
		catch (...)
		{
			clubchoiceimage->Image = Image::FromFile("clubplaceholder.png");
		}
	}

	private: System::Void prevleaguebutton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		leaguecounter = (leaguecounter - 1) % Leagues.size();

		leagueoption->Text = cppToSystem(Leagues[leaguecounter].name);
		leagueoption->Location = centralize(leagueoption);

		for (int i = 0; i < Clubs.size(); i++)
		{
			if (Clubs[i].league->name == Leagues[leaguecounter].name)
			{
				counter = i;
				break;
			}
		}

		clubnamelabel->Text = cppToSystem(Clubs[counter].name);
		clubnamelabel->Location = centralize(clubnamelabel);

		try
		{
			clubchoiceimage->Image = Image::FromFile(cppToSystem(Clubs[counter].name) + ".png");
		}
		catch (...)
		{
			clubchoiceimage->Image = Image::FromFile("clubplaceholder.png");
		}
	}

	private: System::Void addplayerbutton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if(!String::IsNullOrEmpty(playerNameBox->Text) && !String::IsNullOrEmpty(playerPriceBox->Text))   
		{
			msclr::interop::marshal_context context;
			std::string name = context.marshal_as<std::string>(playerNameBox->Text);
			bool taken = false;
			int j = 0;
			for (auto it = Players.begin(); it != Players.end(); ++it, ++j)
			{
				if (it->first == name)
				{
					taken = true;

					playeremptyfieldserror->Show();
					playerexisterror->Hide();
					playeraddsuccess->Hide();
					
					break;
				}
			}
			if (!taken)
			{
				std::string pos = context.marshal_as<std::string>(playerpostion->Text);
				std::string price = context.marshal_as<std::string>(playerPriceBox->Text);
				Club* playerclub = &Clubs[counter];

				Player f(name, pos, std::stoi(price) * 1000, playerclub);
				Players.insert({ name,f });

				playerNameBox->Clear();
				playerPriceBox->Clear();
				
				playeremptyfieldserror->Hide();
				playerexisterror->Hide();
				playeraddsuccess->Show();
			}
			
		}
		else
		{
			playerexisterror->Show();
			playeremptyfieldserror->Hide();
			playeraddsuccess->Hide();
		}
	}

	private: System::Void addLeagueOption_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		collapse(adminSidePanel);
		adminMenuIcon->Parent = addLeaguePanel;

		leagueaddsuccess->Hide();
		leagueexisterror->Hide();

		SelectTab(addLeaguePanel);
	}

	private: System::Void addleaguebutton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (!String::IsNullOrEmpty(leaguenamebox->Text))
		{
			msclr::interop::marshal_context context;
			std::string name = context.marshal_as<std::string>(leaguenamebox->Text);
			bool taken = false;

			for (int i = 0; i < Leagues.size(); i++)
			{
				if (Leagues[i].name == name)
				{
					taken = true;
					leagueemptyfieldserror->Hide();
					leagueexisterror->Show();
					leagueaddsuccess->Hide();
					break;
				}				
			}

			if (!taken)
			{
				League l(name);
				Leagues.push_back(l);

				leagueemptyfieldserror->Hide();
				leagueexisterror->Hide();
				leagueaddsuccess->Show();
			}
		}
		else
		{
			leagueemptyfieldserror->Show();
			leagueexisterror->Hide();
			leagueaddsuccess->Hide();
		}
	}
	
	private: System::Void addClubOption_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (!Leagues.empty())
		{						
			leaguecounter = 0;
			
			collapse(adminSidePanel);

			clubaddsuccess->Hide();
			clubexisterror->Hide();
			noleagueerror->Hide();

			leaguename->Text = cppToSystem(Leagues[leaguecounter].name);
			leaguename->Location = centralize(leaguename);

			try
			{
				leaguechoiceimage->Image = Image::FromFile(cppToSystem(Leagues[leaguecounter].name) + ".png");
			}
			catch (...)
			{
				leaguechoiceimage->Image = Image::FromFile("leagueplaceholder.jpg");
			}

			adminMenuIcon->Parent = addClubPanel;
			SelectTab(addClubPanel);
		}
		else
		{
			noleagueerror->Show();
		}
	}
	
	private: System::Void nextleaguechoice_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		leaguecounter = (leaguecounter + 1) % Leagues.size();
		
		leaguename->Text = cppToSystem(Leagues[leaguecounter].name);
		leaguename->Location = centralize(leaguename);

		try
		{
			leaguechoiceimage->Image = Image::FromFile(cppToSystem(Leagues[leaguecounter].name) + ".png");
		}
		catch (...)
		{
			leaguechoiceimage->Image = Image::FromFile("leagueplaceholder.png");
		}
	}

	private: System::Void prevleaguechoice_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		leaguecounter = (leaguecounter - 1) % Leagues.size();

		leaguename->Text = cppToSystem(Leagues[leaguecounter].name);
		leaguename->Location = centralize(leaguename);

		try
		{
			leaguechoiceimage->Image = Image::FromFile(cppToSystem(Leagues[leaguecounter].name) + ".png");
		}
		catch (...)
		{
			leaguechoiceimage->Image = Image::FromFile("leagueplaceholder.png");
		}
	}

	private: System::Void addclubbutton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (!String::IsNullOrEmpty(clubnamebox->Text))
		{
			msclr::interop::marshal_context context;
			std::string name = context.marshal_as<std::string>(clubnamebox->Text);
			bool taken = false;

			for (int i = 0; i < Clubs.size(); i++)
			{
				if (Clubs[i].name == name)
				{
					taken = true;
					clubemptyfieldserror->Hide();
					clubexisterror->Show();
					clubaddsuccess->Hide();
					break;
				}
			}

			if (!taken)
			{				
				Club c(name,auto_id_team ,&Leagues[leaguecounter]);
				Clubs.push_back(c);

				auto_id_team++;

				clubemptyfieldserror->Hide();
				clubexisterror->Hide();
				clubaddsuccess->Show();
			}
		}
		else
		{
			clubemptyfieldserror->Show();
			clubexisterror->Hide();
			clubaddsuccess->Hide();
		}
	}

	private: System::Void adminlogoutoption_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		SelectTab(loginPage);
		collapse(adminSidePanel);
	}

	private: System::Void admintransfermarketoption_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		SelectTab(transferMarketPanel);
		collapse(adminSidePanel);
		adminMenuIcon->Parent = transferMarketPanel;

		playerList->Controls->Clear();

		int i = 0;
		for (auto it = Players.begin(); it != Players.end(); ++it, ++i)
			playerList->Controls->Add(GetPlayerPanel(it->second, i));
	}

	private: System::Void TransferMarketBuy_Click(System::Object^ sender, System::EventArgs^ e)
		   {
			   Label^ label = (Label^)sender;

			   msclr::interop::marshal_context context;
			   std::string playername = context.marshal_as<std::string>(label->Name);

			   for (int i = 0; i < Users[current_user].members.size(); ++i)
			   {
				   if (playername == Users[current_user].members[i])
				   {
					   label15->Visible = false;
					   label16->Visible = true;
					   label17->Visible = false;
					   return;
				   }
			   }

			   Player* player = findPlayer(playername);

			   if (Users[current_user].budget >= player->price)
			   {
				   Users[current_user].members.push_back(player->name);
				   Users[current_user].budget -= player->price;

				   label15->Visible = true;
				   label16->Visible = false;
				   label17->Visible = false;
			   }
			   else
			   {
				   label15->Visible = false;
				   label16->Visible = false;
				   label17->Visible = true;
			   }
		   }

	private: System::Void mainPage_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		SelectTab(adminPage);
		collapse(adminSidePanel);
		adminMenuIcon->Parent = adminPage;
	}
};
}

Club* findClub(int clubid)
{
	for (int i = 0; i < Clubs.size(); i++)
	{
		if (Clubs[i].id == clubid)
		{
			return &Clubs[i];
		}
	}
	return nullptr;
}

League* findLeague(std::string name)
{
	for (int i = 0; i < Leagues.size(); i++)
	{
		if (Leagues[i].name == name)
		{
			return &Leagues[i];
		}
	}
	return nullptr;
}

Player* findPlayer(std::string name)
{
	auto it = Players.find(name);
	if (it != Players.end())
	{
		return &it->second;
	}
	return nullptr;
}

// -----------------------------------------------------------------------------------------------------------

void readFile()
{
	int count = 0;
	std::string buffer;

	//Read data from admin file

	std::fstream adminFile("adminData.txt", std::ios::in);
	if (adminFile)
	{
		Admin temp;

		while (adminFile.peek() != EOF)
		{
			std::getline(adminFile, temp.adminName);
			std::getline(adminFile, temp.password);

			Admins.push_back(temp);
			++count;
		}

		adminFile.close();
	}

	//
	//Reading League data
	//

	std::fstream leaguedata("leagues.txt", std::ios::in);
	if (leaguedata)
	{
		League lol;

		while (leaguedata.peek() != EOF)
		{
			std::getline(leaguedata, lol.name);
			Leagues.push_back(lol);
		}

		leaguedata.close();
	}

	std::fstream clubdata("clubs.txt", std::ios::in);
	if (clubdata)
	{
		Club club;

		while (clubdata.peek() != EOF)
		{
			std::getline(clubdata, club.name);

			std::getline(clubdata, buffer);
			club.id = std::stol(buffer);

			std::getline(clubdata, buffer);
			club.league = findLeague(buffer);

			Clubs.push_back(club);
		}
	}

	auto_id_team = Clubs.size() + 1;

	//read footballer data

	std::ifstream fbFile("footballerData.txt", std::ios::in);
	if (fbFile)
	{
		Player fb;

		while (fbFile.peek() != EOF)
		{
			std::getline(fbFile, fb.name);
			std::getline(fbFile, fb.position);

			std::getline(fbFile, buffer);
			fb.price = std::stof(buffer);

			std::getline(fbFile, buffer);
			fb.points = std::stoi(buffer);

			std::getline(fbFile, buffer);
			fb.totalpoints = std::stoi(buffer);

			std::getline(fbFile, buffer);
			fb.club = findClub(std::stoi(buffer));

			Players.insert({ fb.name,fb });
		}

		fbFile.close();
	}

	//Read data from user file 

	std::fstream userFile("userData.txt", std::ios::in);
	if (userFile)
	{
		User u;

		while (userFile.peek() != EOF)
		{
			std::getline(userFile, u.userName);
			std::getline(userFile, u.password);

			std::getline(userFile, buffer);
			u.id = std::stol(buffer);

			std::getline(userFile, buffer);
			u.totalPoint = std::stol(buffer);

			std::getline(userFile, buffer);
			u.budget = std::stof(buffer);

			std::getline(userFile, u.customName);

			std::getline(userFile, buffer);
			while (buffer != "###")
			{
				u.members.push_back(buffer);
				std::getline(userFile, buffer);
			}

			Users.push_back(u);
			u.members.clear();
		}

		userFile.close();
	}

	auto_id_user = Users.size() + 1;
}

// -----------------------------------------------------------------------------------------------------------

void writeFile()
{
	//Write data into admin file 

	std::fstream adminFile("adminData.txt", std::ios::out | std::ios::trunc);
	if (adminFile)
	{
		for (int i = 0; i < Admins.size(); i++)
		{
			adminFile << Admins[i].adminName << std::endl;
			adminFile << Admins[i].password << std::endl;
		}

		adminFile.close();
	}

	//write footballer data

	std::fstream fbFile("footballerData.txt", std::ios::out | std::ios::trunc);
	if (fbFile)
	{
		for (auto it = Players.begin(); it != Players.end(); ++it)
		{
			fbFile << it->first << std::endl;
			fbFile << it->second.position << std::endl;
			fbFile << it->second.price << std::endl;
			fbFile << it->second.points << std::endl;
			fbFile << it->second.totalpoints << std::endl;
			fbFile << it->second.club->id << std::endl;
			//fbFile << it->second.club->league->name << std::endl;

		}

		fbFile.close();
	}

	//Write data into team data

	std::fstream leaguedata("leagues.txt", std::ios::out | std::ios::trunc);
	if (leaguedata)
	{
		for (int i = 0; i < Leagues.size(); i++)
			leaguedata << Leagues[i].name << std::endl;

		leaguedata.close();
	}

	//Write Club file

	std::fstream clubdata("clubs.txt", std::ios::out | std::ios::trunc);
	if (clubdata)
	{
		for (int i = 0; i < Clubs.size(); i++)
		{
			clubdata << Clubs[i].name << std::endl;
			clubdata << Clubs[i].id << std::endl;
			clubdata << Clubs[i].league->name << std::endl;
		}

		clubdata.close();
	}

	// Write user file

	std::fstream userFile("userData.txt", std::ios::out | std::ios::trunc);
	if (userFile)
	{
		for (int i = 0; i < Users.size(); i++)
		{
			userFile << Users[i].userName << std::endl;
			userFile << Users[i].password << std::endl;
			userFile << Users[i].id << std::endl;
			userFile << Users[i].totalPoint << std::endl;
			userFile << Users[i].budget << std::endl;
			userFile << Users[i].customName << std::endl;

			for (int j = 0; j < Users[i].members.size(); j++)
			{
				userFile << Users[i].members[j] << std::endl;
			}
			userFile << "###" << std::endl;
		}

		userFile.close();
	}
}

Point centralize(Label^ label)
{
	return Point((1000 - TextRenderer::MeasureText(label->Text, label->Font).Width) / 2, label->Location.Y);
}

void collapse(Panel^ p)
{
	p->Hide();
	p->Width = 10;
}