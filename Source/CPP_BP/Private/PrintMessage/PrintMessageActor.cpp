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

	
	

	//// 2Byte文字（文字コードごとに違う）
	////FString MessageJP = "日本語";               // UTF-8(Textファイルの文字コードに依存)
 //   FString MessageJpText = TEXT("日本語");     // UTF-16

	//UE_LOG(LogTemp, Warning, TEXT("日本語"));
	////UE_LOG(LogTemp, Warning, TEXT("%s"), *MessageJP);
	//UE_LOG(LogTemp, Warning, TEXT("%s"), *MessageJpText);
	//
	






}

// Called every frame
void APrintMessageActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

