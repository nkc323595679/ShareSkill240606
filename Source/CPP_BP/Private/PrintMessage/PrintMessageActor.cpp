// Fill out your copyright notice in the Description page of Project Settings.


#include "PrintMessage/PrintMessageActor.h"

// Sets default values
APrintMessageActor::APrintMessageActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APrintMessageActor::BeginPlay()
{
	Super::BeginPlay();

	
	//if (GEngine)
	//{
	//	//Viewport��Screen�ɕ�������o�͂���
	//	GEngine->AddOnScreenDebugMessage(-1, 8.f, FColor::Cyan, TEXT("Screen Message"));
	//}

	// OutputLog��Log���o�͂���
	//UE_LOG(LogTemp, Warning, TEXT("Log Message"));

    // 1Byte�����iAscii�Ɠ����j
	/*fstring messageen = "english";
	fstring messageentext = text("english");

	ue_log(logtemp, warning, text("english"));
	ue_log(logtemp, warning, text("%s"), *messageen);
	ue_log(logtemp, warning, text("%s"), *messageentext);*/

	// 2Byte�����i�����R�[�h���ƂɈႤ�j
	//FString MessageJP = "���{��";               // UTF-8(Text�t�@�C���̕����R�[�h�Ɉˑ�)
    //FString MessageJpText = TEXT("���{��");     // UTF-16

	//UE_LOG(LogTemp, Warning, TEXT("���{��"));
	//UE_LOG(LogTemp, Warning, TEXT("%s"), *MessageJP);
	//UE_LOG(LogTemp, Warning, TEXT("%s"), *MessageJpText);
	







}

// Called every frame
void APrintMessageActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

