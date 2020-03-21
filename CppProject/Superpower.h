//#pragma once
//#ifndef _SUPER_POWER_
//
////����ö��
//enum SoundID {
//	SOUND_HIT,
//	SOUND_RUN,
//	SOUND_SPROING,
//	SOUND_SWOOP,
//	SOUND_DIVE,
//};
//
////����ö��
//enum ParticleType {
//	PARTICLE_DUST,
//	PARTICLE_SPARKLES,
//};
//
////����
//class SoundPlayer {
//public:
//	void playSound(SoundID sound) {
//
//	}
//
//	void stopSound(SoundID sound) {
//
//	}
//
//	void setVolume(SoundID sound) {
//
//	}
//};
//
////����ϵͳ
//class ParticleSystem {
//
//};
//
////������
//class Superpower
//{
//public:
//	Superpower(ParticleSystem* particles);
//	virtual ~Superpower() {}
//
//	Superpower* Power() {
//		return power;
//	}
//
//	//��ʼ��
//	static void Init(ParticleSystem* particlies) {
//		particles_ = particlies;
//	}
//
//protected:
//	virtual void activate() = 0;
//
//	void move(double x, double y, double z) {
//
//	}
//
//	Superpower* createSkyLunch(ParticleSystem* particlies) {
//		Superpower* power = new SkyLaunch();
//		power->Init(particlies);
//		return power;
//	}
//
//	SoundPlayer& getSoundPlayer() {
//		return soundPlayer_;
//	}
//
//	void spawnParticles(ParticleType type, int count) {
//		//ParticleSystem& particles = Locator::getParticles();
//		
//	}
//
//	
//
//	double getHeroY() { return 0; }
//	double getHeroZ() { return 0; }
//	double getHeroX() { return 0; }
//
//private:
//	SoundPlayer soundPlayer_;
//	//��̬��
//	static ParticleSystem* particles_;
//	Superpower* power;
//};
//
//
//
//class SkyLaunch :public Superpower {
//public:
//	SkyLaunch() :
//		Superpower(new ParticleSystem())
//	{
//
//	}
//protected:
//	virtual void activate() {
//		if (getHeroZ() == 0) {
//			getSoundPlayer().playSound(SOUND_SPROING);
//			spawnParticles(PARTICLE_DUST, 10);
//			move(0, 0, 20);
//		}
//		else if (getHeroZ() < 10.0f) {
//			getSoundPlayer().playSound(SOUND_SWOOP);
//			move(0, 0, getHeroZ() - 20);
//		}
//		else
//		{
//			getSoundPlayer().playSound(SOUND_DIVE);
//			spawnParticles(PARTICLE_SPARKLES, 1);
//			move(0, 0, -getHeroZ());
//		}
//	}
//private:
//	
//};
//
//
//#endif // !_SUPER_POWER_
//
//
