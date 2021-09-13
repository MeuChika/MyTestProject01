// Fill out your copyright notice in the Description page of Project Settings.


#include "Abilities/Use_Spell_01.h"
#include "public/player/ShooterCharacter.h"
#include "Weapons/ShooterWeapon.h"
#include "AbilitySystemComponent.h"

UUse_Spell_01::UUse_Spell_01()
{
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
	FGameplayTag Ability1Tag = FGameplayTag::RequestGameplayTag(FName("Ability.Skill.Ability1"));
	AbilityTags.AddTag(Ability1Tag);
	ActivationOwnedTags.AddTag(Ability1Tag);
	AbilityInputID = EAbilityInput::UseAbility1;
	
	CancelAbilitiesWithTag.AddTag(FGameplayTag::RequestGameplayTag(FName("Ability.Movement.Sprint")));
}

void UUse_Spell_01::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
}

void UUse_Spell_01::InputReleased(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo)
{
	BPI_InputReleased();
}

void UUse_Spell_01::CancelAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateCancelAbility)
{
	Super::CancelAbility(Handle, ActorInfo, ActivationInfo, bReplicateCancelAbility);
}

void UUse_Spell_01::CommitExecute(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo)
{
	Super::CommitExecute(Handle, ActorInfo, ActivationInfo);
}

