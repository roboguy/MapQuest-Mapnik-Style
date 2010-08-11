<Style name="shield-text">
<!--motorway shields-->
	<Rule>
		<Filter>[highway] = 'motorway' and [length] &lt; 3</Filter>
		&maxscale_zoom7;
		<ShieldSymbolizer name="ref" fontset_name="bold-fonts" size="10" fill="#fff" placement="line" file="&symbols;/shield_red_eu2.png" type="png" width="21" height="17" min_distance="30" spacing="750"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway' and [length] = 3</Filter>
		&maxscale_zoom7;
		<ShieldSymbolizer name="ref" fontset_name="bold-fonts" size="10" fill="#fff" placement="line" file="&symbols;/shield_red_eu3.png" type="png" width="27" height="17" min_distance="30" spacing="750"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway' and [length] = 4</Filter>
		&maxscale_zoom7;
		<ShieldSymbolizer name="ref" fontset_name="bold-fonts" size="10" fill="#fff" placement="line" file="&symbols;/shield_red_eu4.png" type="png" width="31" height="17" min_distance="30" spacing="750"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway' and [length] = 5</Filter>
		&maxscale_zoom7;
		<ShieldSymbolizer name="ref" fontset_name="bold-fonts" size="10" fill="#fff" placement="line" file="&symbols;/shield_red_eu5.png" type="png" width="37" height="17" min_distance="30" spacing="750"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway' and [length] = 6</Filter>
		&maxscale_zoom7;
		<ShieldSymbolizer name="ref" fontset_name="bold-fonts" size="10" fill="#fff" placement="line" file="&symbols;/shield_red_eu6.png" type="png" width="45" height="17" min_distance="30" spacing="750"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway' and [length] = 7</Filter>
		&maxscale_zoom7;
		<ShieldSymbolizer name="ref" fontset_name="bold-fonts" size="10" fill="#fff" placement="line" file="&symbols;/shield_red_eu7.png" type="png" width="53" height="17" min_distance="30" spacing="750"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway' and [length] = 8</Filter>
		&maxscale_zoom7;
		<ShieldSymbolizer name="ref" fontset_name="bold-fonts" size="10" fill="#fff" placement="line" file="&symbols;/shield_red_eu8.png" type="png" width="61" height="17" min_distance="30" spacing="750"/>
	</Rule>	


<!--trunk shields-->
	<Rule>
		<Filter>[highway] = 'trunk' and [length] &lt; 3</Filter>
		&maxscale_zoom10;
		<ShieldSymbolizer name="ref" fontset_name="bold-fonts" size="10" fill="#404040" placement="line" file="&symbols;/shield_gold_eu2.png" type="png" width="23" height="19" min_distance="30" spacing="750"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' and [length] = 3</Filter>
		&maxscale_zoom10;
		<ShieldSymbolizer name="ref" fontset_name="bold-fonts" size="10" fill="#404040" placement="line" file="&symbols;/shield_gold_eu3.png" type="png" width="29" height="19" min_distance="30" spacing="750"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' and [length] = 4</Filter>
		&maxscale_zoom10;
		<ShieldSymbolizer name="ref" fontset_name="bold-fonts" size="10" fill="#404040" placement="line" file="&symbols;/shield_gold_eu4.png" type="png" width="33" height="19" min_distance="30" spacing="750"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' and [length] = 5</Filter>
		&maxscale_zoom10;
		<ShieldSymbolizer name="ref" fontset_name="bold-fonts" size="10" fill="#404040" placement="line" file="&symbols;/shield_gold_eu5.png" type="png" width="39" height="19" min_distance="30" spacing="750"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' and [length] = 6</Filter>
		&maxscale_zoom10;
		<ShieldSymbolizer name="ref" fontset_name="bold-fonts" size="10" fill="#404040" placement="line" file="&symbols;/shield_gold_eu6.png" type="png" width="47" height="19" min_distance="30" spacing="750"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' and [length] = 7</Filter>
		&maxscale_zoom10;
		<ShieldSymbolizer name="ref" fontset_name="bold-fonts" size="10" fill="#404040" placement="line" file="&symbols;/shield_gold_eu7.png" type="png" width="55" height="19" min_distance="30" spacing="750"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' and [length] = 8</Filter>
		&maxscale_zoom10;
		<ShieldSymbolizer name="ref" fontset_name="bold-fonts" size="10" fill="#404040" placement="line" file="&symbols;/shield_gold_eu8.png" type="png" width="63" height="19" min_distance="30" spacing="750"/>
	</Rule>

<!--primary/secondary shields-->
	<Rule>
		<Filter>([highway] = 'primary' or [highway] = 'secondary') and [length] &lt; 3</Filter>
		&maxscale_zoom12;
		<ShieldSymbolizer name="ref" fontset_name="bold-fonts" size="10" fill="#404040" placement="line" file="&symbols;/shield_white_eu2.png" type="png" width="23" height="19" min_distance="30" spacing="750"/>
	</Rule>
	<Rule>
		<Filter>([highway] = 'primary' or [highway] = 'secondary') and [length] = 3</Filter>
		&maxscale_zoom12;
		<ShieldSymbolizer name="ref" fontset_name="bold-fonts" size="10" fill="#404040" placement="line" file="&symbols;/shield_white_eu3.png" type="png" width="29" height="19" min_distance="30" spacing="750"/>
	</Rule>
	<Rule>
		<Filter>([highway] = 'primary' or [highway] = 'secondary') and [length] = 4</Filter>
		&maxscale_zoom12;
		<ShieldSymbolizer name="ref" fontset_name="bold-fonts" size="10" fill="#404040" placement="line" file="&symbols;/shield_white_eu4.png" type="png" width="33" height="19" min_distance="30" spacing="750"/>
	</Rule>
	<Rule>
		<Filter>([highway] = 'primary' or [highway] = 'secondary') and [length] = 5</Filter>
		&maxscale_zoom12;
		<ShieldSymbolizer name="ref" fontset_name="bold-fonts" size="10" fill="#404040" placement="line" file="&symbols;/shield_white_eu5.png" type="png" width="39" height="19" min_distance="30" spacing="750"/>
	</Rule>
	<Rule>
		<Filter>([highway] = 'primary' or [highway] = 'secondary') and [length] = 6</Filter>
		&maxscale_zoom12;
		<ShieldSymbolizer name="ref" fontset_name="bold-fonts" size="10" fill="#404040" placement="line" file="&symbols;/shield_white_eu6.png" type="png" width="47" height="19" min_distance="30" spacing="750"/>
	</Rule>
	<Rule>
		<Filter>([highway] = 'primary' or [highway] = 'secondary') and [length] = 7</Filter>
		&maxscale_zoom12;
		<ShieldSymbolizer name="ref" fontset_name="bold-fonts" size="10" fill="#404040" placement="line" file="&symbols;/shield_white_eu7.png" type="png" width="55" height="19" min_distance="30" spacing="750"/>
	</Rule>
	<Rule>
		<Filter>([highway] = 'primary' or [highway] = 'secondary') and [length] = 8</Filter>
		&maxscale_zoom12;
		<ShieldSymbolizer name="ref" fontset_name="bold-fonts" size="10" fill="#404040" placement="line" file="&symbols;/shield_white_eu8.png" type="png" width="63" height="19" min_distance="30" spacing="750"/>
	</Rule>
</Style>
<Style name="street-text">

<!--motorway text-->
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom12;
		<TextSymbolizer name="name" fontset_name="book-fonts" size="12" fill="#2b2b2b" halo_fill="rgba(255,255,255,0.25)" halo_radius="2" placement="line" max_char_angle_delta="40"/>
	</Rule>
<!--trunk/primary text-->
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary'</Filter>
		&maxscale_zoom12;
		<TextSymbolizer name="name" fontset_name="book-fonts" size="12" fill="#2b2b2b" halo_fill="rgba(255,255,255,0.25)" halo_radius="2" placement="line" max_char_angle_delta="40"/>
	</Rule>
<!--secondary text-->
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'proposed' or [highway]='construction'</Filter>
		&maxscale_zoom12;
		<TextSymbolizer name="name" fontset_name="book-fonts" size="12" fill="#2b2b2b" halo_fill="rgba(255,255,255,0.25)" halo_radius="2" placement="line" max_char_angle_delta="40"/>
	</Rule>
<!--tertiary text-->
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'unclassified' or [highway] = 'residential'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<TextSymbolizer name="name" fontset_name="book-fonts" size="10" fill="#2b2b2b" halo_fill="rgba(255,255,255,0.25)" halo_radius="2"  placement="line" max_char_angle_delta="40"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'unclassified' or [highway] = 'residential'</Filter>
		&maxscale_zoom18;
		<TextSymbolizer name="name" fontset_name="book-fonts" size="12" fill="#2b2b2b" halo_fill="rgba(255,255,255,0.25)" halo_radius="2"  placement="line" max_char_angle_delta="40"/>
	</Rule>
<!--all other text
	<Rule>
		<ElseFilter/>
		&maxscale_zoom16;
		&minscale_zoom17;
		<TextSymbolizer name="name" fontset_name="book-fonts" size="10" fill="#2b2b2b" halo_radius="2" placement="line" max_char_angle_delta="40"/>
	</Rule>
	<Rule>
		<ElseFilter/>
		&maxscale_zoom18;
		<TextSymbolizer name="name" fontset_name="book-fonts" size="11" fill="#2b2b2b" halo_radius="2" placement="line" max_char_angle_delta="40"/>
	</Rule>
-->
</Style>
<Layer name="shield-text" status="on" srs="&osm2pgsql_projection;">
	<StyleName>shield-text</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,highway,
      case when name ilike ref then null else name end as name,
      ref,char_length(ref) as length
       from &prefix;_roads
       where waterway IS NULL
         and leisure IS NULL
         and landuse IS NULL
         and (name is not null or ref is not null)
      ) as roads
	</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="street-text" status="on" srs="&osm2pgsql_projection;">
	<StyleName>street-text</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,highway,aeroway,
      case when name ilike ref then null else name end as name,
      ref,char_length(ref) as length,
       case when bridge in ('yes','true','1') then 'yes'::text else bridge end as bridge
       from &prefix;_line
       where waterway IS NULL
         and leisure IS NULL
         and landuse IS NULL
         and (name is not null or ref is not null)
      ) as roads
	</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>