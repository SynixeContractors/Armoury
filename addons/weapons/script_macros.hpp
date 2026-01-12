#define DESCRIPTION_AR_762x39 descriptionShort = "Assault Rifle<br />Caliber: 7.62x39 mm"
#define DESCRIPTION_AR_556    descriptionShort = "Assault Rifle<br />Caliber: 5.56x45 mm"

#define MAGAZINE_G36 \
DESCRIPTION_AR_556;\
magazines[] = {QCLASS(30Rnd_556x45_Ball_G36)};\
magazineWell[] = {\
    "CBA_556x45_G36",\
}

#define MAGAZINE_AKM \
DESCRIPTION_AR_762x39;\
magazines[] = {"30Rnd_762x39_AK12_Mag_F"};\
magazineWell[] = {\
    "CBA_762x39_AK",\
    "CBA_762x39_RPK",\
    "AK_76x39",\
}
