prenom="Med";
disp("Vote prenom est "+prenom);
disp("la longeur de votre prenom est : "+length(prenom));
ch="MATLAB est un environnement de programmation";
strfind(ch,"environnement");
strrep(ch,'environnement','language');
chx=upper(ch);
chx2=lower(ch);
res=lower(extractBefore(ch," est"))+upper(extractAfter(ch,"MATLAB"))
replace(ch," ","-");