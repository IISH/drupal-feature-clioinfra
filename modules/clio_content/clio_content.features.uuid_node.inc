<?php
/**
 * @file
 * clio_content.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function clio_content_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 0,
  'title' => 'Presentation of Clio Infra at MIT, June 2012',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '43508183-7aff-4a23-9411-92920403d345',
  'type' => 'publication',
  'language' => 'und',
  'created' => 1366292235,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '16d803fd-e771-4356-8e6b-84c82b2be974',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<object id="__sse13526671" width="425" height="355"><param name="movie" value="http://static.slidesharecdn.com/swf/ssplayer2.swf?doc=clioinframit-120703064501-phpapp02&stripped_title=clio-infra-mit&userName=ClioInfra" /><param name="allowFullScreen" value="true"/><param name="allowScriptAccess" value="always"/><param name="wmode" value="transparent"/><embed name="__sse13526671" src="http://static.slidesharecdn.com/swf/ssplayer2.swf?doc=clioinframit-120703064501-phpapp02&stripped_title=clio-infra-mit&userName=ClioInfra" type="application/x-shockwave-flash" allowscriptaccess="always" allowfullscreen="true" wmode="transparent" width="425" height="355"></embed></object><div style="padding:5px 0 12px"></div>',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p><embed name="__sse13526671" src="http://static.slidesharecdn.com/swf/ssplayer2.swf?doc=clioinframit-120703064501-phpapp02&amp;stripped_title=clio-infra-mit&amp;userName=ClioInfra" type="application/x-shockwave-flash" allowscriptaccess="always" allowfullscreen="true" wmode="transparent" width="425" height="355"></embed></p><div></div>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_publication_file' => array(),
  'field_publication_image' => array(
    'und' => array(
      0 => array(
        'fid' => 281,
        'uid' => 1,
        'filename' => 'presentation_of_clio_infra_at_mit_june_2012.jpg',
        'uri' => 'public://publication/image/presentation_of_clio_infra_at_mit_june_2012.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 192933,
        'status' => 1,
        'timestamp' => 1397053501,
        'uuid' => 'fb2bb8b4-6e81-4743-9308-68dde606860c',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 1280,
        'height' => 800,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'name' => '',
  'picture' => 0,
  'data' => NULL,
  'date' => '2013-04-18 15:37:15 +0200',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Workshop on Real Wages, November 2012',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'd71a5c43-4891-4087-b1e7-4ec4fcc34e12',
  'type' => 'article',
  'language' => 'und',
  'created' => 1363874825,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '1af814b5-778a-4cad-8c09-764981f9ab69',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Workshop: The Global and Long-term Development of Real Wages: Methods, Problems and Possibilities <br />
Date: 2 November 2012 to 3 November 2012 <br />
Location: IISH, Cruquiusweg 31, Amsterdam <br />
Information: info@iisg.nl <br />
</p>
<p>
Real wages are a critical measure for human well-being. In recent years much progress has been made in making real wages comparable over time and space. Calculating real wages based on \'bare bones\' and \'respectability\' baskets, as pioneered by Bob Allen, has now become a widely used methodology.
</p>
<p>
The studies that have appeared now allow us to compare living standards in Europe, Turkey, China, Japan, India, the Americas, and various African colonies. These studies have important implications for the big debates on the Great Divergence between Europe and Asia, and the long-term economic effects of colonialism in Africa and the Americas. Nonetheless, the use of real wages to make statements about the standard of living and economic development in past societies has also been criticized. Critics have pointed, for example, to issues regarding the representativeness of wage labour, the underlying dynamics of the labour market, and the role of female labour.
</p>
<p>
In this workshop, experts working with wage and price data across the globe were brought together. New results were presented and methodological issues as well as the broader implications and possibilities of this type of research for the field of economic history were discussed.
</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Workshop: The Global and Long-term Development of Real Wages: Methods, Problems and Possibilities<br />
Date: 2 November 2012 to 3 November 2012<br />
Location: IISH, Cruquiusweg 31, Amsterdam<br />
Information: <a href="mailto:info@iisg.nl">info@iisg.nl</a>
</p>
<p>
Real wages are a critical measure for human well-being. In recent years much progress has been made in making real wages comparable over time and space. Calculating real wages based on \'bare bones\' and \'respectability\' baskets, as pioneered by Bob Allen, has now become a widely used methodology.
</p>
<p>
The studies that have appeared now allow us to compare living standards in Europe, Turkey, China, Japan, India, the Americas, and various African colonies. These studies have important implications for the big debates on the Great Divergence between Europe and Asia, and the long-term economic effects of colonialism in Africa and the Americas. Nonetheless, the use of real wages to make statements about the standard of living and economic development in past societies has also been criticized. Critics have pointed, for example, to issues regarding the representativeness of wage labour, the underlying dynamics of the labour market, and the role of female labour.
</p>
<p>
In this workshop, experts working with wage and price data across the globe were brought together. New results were presented and methodological issues as well as the broader implications and possibilities of this type of research for the field of economic history were discussed.
</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_image' => array(),
  'field_tags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'name' => '',
  'picture' => 0,
  'data' => NULL,
  'date' => '2013-03-21 15:07:05 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Copyright',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '7d416fbd-f857-4ab6-a8ae-2ec52d5b84f7',
  'type' => 'page',
  'language' => 'und',
  'created' => 1396885351,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '3e434b89-187f-401b-80b0-d86f0f4a2c1a',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Copyright 2014 Clio Infra',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Copyright 2014 Clio Infra</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-04-07 17:42:31 +0200',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Partners',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'd692cb3e-0cd9-443f-bd9e-761d0ca19b99',
  'type' => 'page',
  'language' => 'und',
  'created' => 1397045565,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '5bd62e49-7c35-4082-9486-7dfa04e488a2',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'International Institute of Social History (IISH)

The IISH was established by the pioneer of modern economic history in the Netherlands, Nicolaas W. Posthumus, in 1935. He also set up the Netherlands Economic History Archive (NEHA), which is now part of IISH. The institute is well-known worldwide for its rich collections on national and international social movements (the international labour movement in particular). Since 1979, the Institute has operated under the umbrella of the Royal Netherlands Academy of Arts and Sciences (KNAW). It has a very successful socio-economic history research department with a wide network of research groups around the world. In the past decade it has developed a robust digitisation infrastructure to support the management of digital collections and to facilitate e-research. This infrastructure also accommodates the needs of related institutions such as the Press Museum. The construction of high-quality datasets that allow for global comparative research in social and economic history is one of the institute’s most important strategic actions for the coming years. The research staff of the IISH is currently focusing on two large, interrelated projects: Global Labor History and Global Economic History. Both projects require a massive amount of data on highly diverse indicators that, in conjunction, will provide a new long-term perspective on current social and economic problems associated with globalisation. The IISH actively supports and develops both existing and new collaboratories of specialists around the world, who collect, standardise, and share their data. The enhanced infrastructure of research data constitutes a vital asset in global social and economic research. The IISH provides a number of datahubs (Wages and Prices, Global Labour Relations), as well as the infrastructure for new services such as the e-collaboratory platform and the collective Clio Infra services.
Homepage of International Institute of Social History

Utrecht University

Utrecht University (UU) is the largest university in the Netherlands with c. 28,000 students and c. 8,000 members of staff. The UU-partner of Clio Infra is the Research Institute for History and Culture of the Faculty of Humanities, and in particular the research group on social and economic history led by Prof. Dr. Jan Luiten van Zanden. This group has established a strong reputation in its field, and specialises in research into the interaction between institutions and socio-economic development. A number of relatively large research projects – mainly funded by the Netherlands Science Foundation and other external funds (such as companies) – are carried out here.
Homepage of Research Institute for History and Culture of the Faculty of Humanities of Utrecht University

University of Groningen

The University of Groningen has a long academic tradition with a broad range of scientific and scholarly disciplines, organized in ten faculties. With over 20,000 students and 5,000 staff members it is one of the largest universities in the Netherlands. The Groningen Growth and Development Centre (GGDC) was created in 1992 within the Economics Department by a group of researchers working on comparative analysis of levels of economic performance and differences in growth rates. The activities of the GGDC are primarily in the field of research and are largely based on a range of comprehensive databases on indicators of growth and development, which the GGDC compiles and maintains on a regular basis. Part of the centre’s work is carried out in collaboration with the Economics Program of The Conference Board, which among other things supports the GGDC Total Economy Data Base. The GGDC participates in various programmes funded by the European Commission. Since 2004 the Centre has coordinated the EU KLEMS project on comparative productivity at industry level in the European Union. This is part of the 6th Framework Programme, Priority 8, ‘Policy Support and Anticipating Scientific and Technological Needs’. Since 2005 members of the GGDC coordinate the project ‘An International Historical Database on Economic Growth and Development’, which is funded by the Netherlands Organisation for Scientific Research. This projects aims to make available historical national accounting data for western Europe, North and South America, and East Asia. Since 2006 the members of the GGDC have participated in GlobalEuroNet, the ESF Research Networking Programme on European Economic History. GGDC is leader of the hub on national accounts.
Homepage of Groningen Growth and Development Centre

University of Tübingen

The University of Tübingen enjoys a high reputation world-wide for its focus on humanities and social sciences, as well as medical and life sciences. At the intersection of these fields lies the economic history of the biological standard of living. Research into this field benefits from the University’s strengths in humanities such as, for example, archaeology and Asia studies, as well as its medical sciences which contribute to the natural science side of the data hub. The University of Tübingen is consistently ranked among the ten leading universities in Germany, and its Economic History Department has generated and supported younger scholars who now teach at universities around the world such as Oxford, Munich, Vienna, Berlin, Southampton, Shantou, Poznan, Dresden, and Bristol.
Homepage of Economic History Department of University of Tübingen

Data Archiving and Networked Services (DANS)

DANS is the national organisation responsible for storing and providing permanent access to research data from the Humanities and Social Sciences in the Netherlands. It is a "joint venture" of two major national research organisations in the Netherlands: the Netherlands Organisation for Scientific Research (NWO) and the Royal Netherlands Academy of Arts and Sciences (KNAW). Currently approximately 15 permanent and 15 temporary staff members are working on both recurrent tasks (e.g. acquisition of datasets, data curation, and training and consultation) and research & development projects with a focus on the long term longevity of scientific datasets. DANS staff have been involved in many R&D projects and have world class knowledge on data curation, preservation and dissemination. Research and development projects include: EASY - Electronic Archiving SYstem: a system to accommodate data up- and downloading by researchers for preservation and dissemination purposes; MIXED - Migrating to Intermediate XML for Electronic Data: development of an archival format (and software) for databases and spreadsheets to allow for efficient long term preservation and accessibility of datasets; Persistent Identifiers: a research project to create an overview of the different solutions for persistent identifiers (this is an essential ingredient for setting up durable connections between datasets and/or publications); DARIAH - Digital Research Infrastructure for the Arts and Humanities: an international project that aims to set up a European infrastructure for data curation, preservation and dissemination. DANS will provide long-term storage of all Clio Infra datasets in its EASY system.
Homepage of Data Archiving and Networked Services
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>International Institute of Social History (IISH)</p>
<p>The IISH was established by the pioneer of modern economic history in the Netherlands, Nicolaas W. Posthumus, in 1935. He also set up the Netherlands Economic History Archive (NEHA), which is now part of IISH. The institute is well-known worldwide for its rich collections on national and international social movements (the international labour movement in particular). Since 1979, the Institute has operated under the umbrella of the Royal Netherlands Academy of Arts and Sciences (KNAW). It has a very successful socio-economic history research department with a wide network of research groups around the world. In the past decade it has developed a robust digitisation infrastructure to support the management of digital collections and to facilitate e-research. This infrastructure also accommodates the needs of related institutions such as the Press Museum. The construction of high-quality datasets that allow for global comparative research in social and economic history is one of the institute’s most important strategic actions for the coming years. The research staff of the IISH is currently focusing on two large, interrelated projects: Global Labor History and Global Economic History. Both projects require a massive amount of data on highly diverse indicators that, in conjunction, will provide a new long-term perspective on current social and economic problems associated with globalisation. The IISH actively supports and develops both existing and new collaboratories of specialists around the world, who collect, standardise, and share their data. The enhanced infrastructure of research data constitutes a vital asset in global social and economic research. The IISH provides a number of datahubs (Wages and Prices, Global Labour Relations), as well as the infrastructure for new services such as the e-collaboratory platform and the collective Clio Infra services.<br />
Homepage of International Institute of Social History</p>
<p>Utrecht University</p>
<p>Utrecht University (UU) is the largest university in the Netherlands with c. 28,000 students and c. 8,000 members of staff. The UU-partner of Clio Infra is the Research Institute for History and Culture of the Faculty of Humanities, and in particular the research group on social and economic history led by Prof. Dr. Jan Luiten van Zanden. This group has established a strong reputation in its field, and specialises in research into the interaction between institutions and socio-economic development. A number of relatively large research projects – mainly funded by the Netherlands Science Foundation and other external funds (such as companies) – are carried out here.<br />
Homepage of Research Institute for History and Culture of the Faculty of Humanities of Utrecht University</p>
<p>University of Groningen</p>
<p>The University of Groningen has a long academic tradition with a broad range of scientific and scholarly disciplines, organized in ten faculties. With over 20,000 students and 5,000 staff members it is one of the largest universities in the Netherlands. The Groningen Growth and Development Centre (GGDC) was created in 1992 within the Economics Department by a group of researchers working on comparative analysis of levels of economic performance and differences in growth rates. The activities of the GGDC are primarily in the field of research and are largely based on a range of comprehensive databases on indicators of growth and development, which the GGDC compiles and maintains on a regular basis. Part of the centre’s work is carried out in collaboration with the Economics Program of The Conference Board, which among other things supports the GGDC Total Economy Data Base. The GGDC participates in various programmes funded by the European Commission. Since 2004 the Centre has coordinated the EU KLEMS project on comparative productivity at industry level in the European Union. This is part of the 6th Framework Programme, Priority 8, ‘Policy Support and Anticipating Scientific and Technological Needs’. Since 2005 members of the GGDC coordinate the project ‘An International Historical Database on Economic Growth and Development’, which is funded by the Netherlands Organisation for Scientific Research. This projects aims to make available historical national accounting data for western Europe, North and South America, and East Asia. Since 2006 the members of the GGDC have participated in GlobalEuroNet, the ESF Research Networking Programme on European Economic History. GGDC is leader of the hub on national accounts.<br />
Homepage of Groningen Growth and Development Centre</p>
<p>University of Tübingen</p>
<p>The University of Tübingen enjoys a high reputation world-wide for its focus on humanities and social sciences, as well as medical and life sciences. At the intersection of these fields lies the economic history of the biological standard of living. Research into this field benefits from the University’s strengths in humanities such as, for example, archaeology and Asia studies, as well as its medical sciences which contribute to the natural science side of the data hub. The University of Tübingen is consistently ranked among the ten leading universities in Germany, and its Economic History Department has generated and supported younger scholars who now teach at universities around the world such as Oxford, Munich, Vienna, Berlin, Southampton, Shantou, Poznan, Dresden, and Bristol.<br />
Homepage of Economic History Department of University of Tübingen</p>
<p>Data Archiving and Networked Services (DANS)</p>
<p>DANS is the national organisation responsible for storing and providing permanent access to research data from the Humanities and Social Sciences in the Netherlands. It is a "joint venture" of two major national research organisations in the Netherlands: the Netherlands Organisation for Scientific Research (NWO) and the Royal Netherlands Academy of Arts and Sciences (KNAW). Currently approximately 15 permanent and 15 temporary staff members are working on both recurrent tasks (e.g. acquisition of datasets, data curation, and training and consultation) and research &amp; development projects with a focus on the long term longevity of scientific datasets. DANS staff have been involved in many R&amp;D projects and have world class knowledge on data curation, preservation and dissemination. Research and development projects include: EASY - Electronic Archiving SYstem: a system to accommodate data up- and downloading by researchers for preservation and dissemination purposes; MIXED - Migrating to Intermediate XML for Electronic Data: development of an archival format (and software) for databases and spreadsheets to allow for efficient long term preservation and accessibility of datasets; Persistent Identifiers: a research project to create an overview of the different solutions for persistent identifiers (this is an essential ingredient for setting up durable connections between datasets and/or publications); DARIAH - Digital Research Infrastructure for the Arts and Humanities: an international project that aims to set up a European infrastructure for data curation, preservation and dissemination. DANS will provide long-term storage of all Clio Infra datasets in its EASY system.<br />
Homepage of Data Archiving and Networked Services</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-04-09 14:12:45 +0200',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Contact',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '6a18ee73-2438-424b-82f0-910a1815d900',
  'type' => 'page',
  'language' => 'und',
  'created' => 1397045596,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '5d4282df-5e1f-4f57-bf09-54621423513e',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Clio Infra
International Institute of Social History
Cruquiusweg 31
1019 AT Amsterdam
The Netherlands

Correspondence address:

International Institute of Social History
P.O. Box 2169
1000 CD Amsterdam
The Netherlands
Tel + 31 20 6685866
Fax + 31 20 6654181
E-mail: clioinfra@iisg.nl
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Clio Infra<br />
International Institute of Social History<br />
Cruquiusweg 31<br />
1019 AT Amsterdam<br />
The Netherlands</p>
<p>Correspondence address:</p>
<p>International Institute of Social History<br />
P.O. Box 2169<br />
1000 CD Amsterdam<br />
The Netherlands<br />
Tel + 31 20 6685866<br />
Fax + 31 20 6654181<br />
E-mail: <a href="mailto:clioinfra@iisg.nl">clioinfra@iisg.nl</a></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-04-09 14:13:16 +0200',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Inequality',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '3837ed06-0ea9-4247-9c9f-1013372deed7',
  'type' => 'slideshow_item',
  'language' => 'und',
  'created' => 1370251929,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '626ddec2-b090-4c28-8de6-c98a90f93b15',
  'revision_uid' => 1,
  'body' => array(),
  'field_arrow_1' => array(
    'und' => array(
      0 => array(
        'value' => 'high',
      ),
    ),
  ),
  'field_arrow_2' => array(
    'und' => array(
      0 => array(
        'value' => 'low',
      ),
    ),
  ),
  'field_bar_1' => array(
    'und' => array(
      0 => array(
        'value' => '#D9B500',
      ),
    ),
  ),
  'field_bar_2' => array(
    'und' => array(
      0 => array(
        'value' => '#C40E1F',
      ),
    ),
  ),
  'field_height_1' => array(
    'und' => array(
      0 => array(
        'value' => 75,
      ),
    ),
  ),
  'field_height_2' => array(
    'und' => array(
      0 => array(
        'value' => 45,
      ),
    ),
  ),
  'field_slideshow_image' => array(),
  'field_text_1' => array(
    'und' => array(
      0 => array(
        'value' => 'Global inequality has been increasing for 500 years...',
        'format' => NULL,
        'safe_value' => 'Global inequality has been increasing for 500 years...',
      ),
    ),
  ),
  'field_text_2' => array(
    'und' => array(
      0 => array(
        'value' => 'only now, thanks to the rise of China and India, it is declining',
        'format' => NULL,
        'safe_value' => 'only now, thanks to the rise of China and India, it is declining',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
  ),
  'name' => '',
  'picture' => 0,
  'data' => NULL,
  'date' => '2013-06-03 11:32:09 +0200',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Jim Yong Kim Outlines World Bank Vision ',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '0b8682e0-caea-4265-9ede-c8d8394b95b6',
  'type' => 'publication',
  'language' => 'und',
  'created' => 1366292025,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6fd5b588-4142-47aa-9901-0442b00be447',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'World Bank Group President Jim Yong Kim outlines the World Bank Vision at the plenary session of the shareholders\' Annual Meetings in Tokyo, October 12, 2012
<iframe width="560" height="315" src="http://www.youtube.com/embed/HPczdc0AtiI" frameborder="0" allowfullscreen></iframe>',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>World Bank Group President Jim Yong Kim outlines the World Bank Vision at the plenary session of the shareholders\' Annual Meetings in Tokyo, October 12, 2012</p>
<iframe width="560" height="315" src="http://www.youtube.com/embed/HPczdc0AtiI" frameborder="0" allowfullscreen=""></iframe>',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_publication_file' => array(),
  'field_publication_image' => array(
    'und' => array(
      0 => array(
        'fid' => 282,
        'uid' => 1,
        'filename' => 'jim_yong_kim_outlines_world_bank_vision.jpg',
        'uri' => 'public://publication/image/jim_yong_kim_outlines_world_bank_vision.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 420464,
        'status' => 1,
        'timestamp' => 1397053550,
        'uuid' => 'a2015199-8b56-4ee9-a6a7-6076f761d077',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 1280,
        'height' => 800,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'name' => '',
  'picture' => 0,
  'data' => NULL,
  'date' => '2013-04-18 15:33:45 +0200',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'News & publications',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '584a20ae-0b6f-4dcd-8f14-126a9f1705c3',
  'type' => 'page',
  'language' => 'und',
  'created' => 1397052777,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '712d37c3-6b9b-4cee-a3f9-767a319d80d3',
  'revision_uid' => 1,
  'body' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-04-09 16:12:57 +0200',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Working Papers Center for Global Economic History Online',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '2c3e1d5f-3800-48ac-90cd-64f5c1dfea49',
  'type' => 'publication',
  'language' => 'und',
  'created' => 1364416030,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '8933752e-83e0-43f0-a186-56a42618c245',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'The CGEH Working Paper series aims to make the most recent work on a variety of economic and social historical topics by scholars from the Utrecht group of Social and Economic History available to the public. The series also include invited or submitted contributions from colleagues and friends around the world.


<embed src="http://www.cgeh.nl/working-paper-series" width="1000" height="750"> </embed>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>The CGEH Working Paper series aims to make the most recent work on a variety of economic and social historical topics by scholars from the Utrecht group of Social and Economic History available to the public. The series also include invited or submitted contributions from colleagues and friends around the world.</p>
<p><embed src="http://www.cgeh.nl/working-paper-series" width="1000" height="750"></embed></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_publication_file' => array(),
  'field_publication_image' => array(
    'und' => array(
      0 => array(
        'fid' => 283,
        'uid' => 1,
        'filename' => 'cgeh-header-b.jpg',
        'uri' => 'public://publication/image/cgeh-header-b.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 40147,
        'status' => 1,
        'timestamp' => 1397053628,
        'uuid' => '6b254203-06af-4392-a4ec-c2edbe9edda4',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 960,
        'height' => 200,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'name' => '',
  'picture' => 0,
  'data' => NULL,
  'date' => '2013-03-27 21:27:10 +0100',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Education',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '06e89e2e-6028-4c91-beec-9f84929eadd0',
  'type' => 'slideshow_item',
  'language' => 'und',
  'created' => 1370529432,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '8bfb54aa-0a06-4a44-9f04-244df511f648',
  'revision_uid' => 1,
  'body' => array(),
  'field_arrow_1' => array(
    'und' => array(
      0 => array(
        'value' => 'low',
      ),
    ),
  ),
  'field_arrow_2' => array(
    'und' => array(
      0 => array(
        'value' => 'low',
      ),
    ),
  ),
  'field_bar_1' => array(
    'und' => array(
      0 => array(
        'value' => '#B1007C',
      ),
    ),
  ),
  'field_bar_2' => array(
    'und' => array(
      0 => array(
        'value' => '#D9B500',
      ),
    ),
  ),
  'field_height_1' => array(
    'und' => array(
      0 => array(
        'value' => 50,
      ),
    ),
  ),
  'field_height_2' => array(
    'und' => array(
      0 => array(
        'value' => 50,
      ),
    ),
  ),
  'field_slideshow_image' => array(),
  'field_text_1' => array(
    'und' => array(
      0 => array(
        'value' => 'Over the past 140 years ... ',
        'format' => NULL,
        'safe_value' => 'Over the past 140 years ... ',
      ),
    ),
  ),
  'field_text_2' => array(
    'und' => array(
      0 => array(
        'value' => 'global differences in educational development have persisted',
        'format' => NULL,
        'safe_value' => 'global differences in educational development have persisted',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
  ),
  'name' => '',
  'picture' => 0,
  'data' => NULL,
  'date' => '2013-06-06 16:37:12 +0200',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'About Clio Infra',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '3202b3c0-9996-4315-a9ba-0a22e924e841',
  'type' => 'page',
  'language' => 'und',
  'created' => 1357935656,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'cf295a17-30aa-467c-bd1b-ddbdb3527053',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'In 2010, the Netherlands Organisation for Scientific Research (NWO) awarded a subsidy to the Clio Infra project, of which Jan Luiten van Zanden was the main applicant and for which the International Institute of Social History (IISH) fulfills the secretarial function. Under the title of Clio Infra, a set of interconnected databases has been set up containing worldwide data on social, economic, and institutional indicators for the past five centuries, with special attention to the past 200 years. These indicators allow research into long-term development of worldwide economic growth and inequality.

Global inequality is one of the key problems of the contemporary world. Some countries have (recently) become wealthy, other countries have remained poor. New theoretical developments in economic science - such as new institutional economics, new economic geography, and new growth theory - and the rise of global economic and social history require such processes to be studied on a worldwide scale. The question of worldwide economic growth and inequality can only be researched on the basis of worldwide data concerning the patterns of economic performance and their causes. Clio Infra provides datasets for the most important indicators. Economic and social historians from around the world have been working together in thematic collaboratories, in order to collect and share their knowledge concerning the relevant indicators of economic performance and its causes. The collected data have been standardized, harmonized, and stored for future use. New indicators to study inequality have been developed. The datasets are accessible through the Clio Infra portal which also offers possibilities for visualization of the data. All Clio Infra datasets will be archived by Data Archiving and Networked Services (DANS).

The unique global datasets enable new opportunities for data analysis and the testing of hypotheses from new economic theories. Clio Infra offers the opportunity to greatly enhance our understanding of the origins, causes and character of the process of global inequality.
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>In 2010, the Netherlands Organisation for Scientific Research (NWO) awarded a subsidy to the Clio Infra project, of which Jan Luiten van Zanden was the main applicant and for which the International Institute of Social History (IISH) fulfills the secretarial function. Under the title of Clio Infra, a set of interconnected databases has been set up containing worldwide data on social, economic, and institutional indicators for the past five centuries, with special attention to the past 200 years. These indicators allow research into long-term development of worldwide economic growth and inequality.</p>
<p>Global inequality is one of the key problems of the contemporary world. Some countries have (recently) become wealthy, other countries have remained poor. New theoretical developments in economic science - such as new institutional economics, new economic geography, and new growth theory - and the rise of global economic and social history require such processes to be studied on a worldwide scale. The question of worldwide economic growth and inequality can only be researched on the basis of worldwide data concerning the patterns of economic performance and their causes. Clio Infra provides datasets for the most important indicators. Economic and social historians from around the world have been working together in thematic collaboratories, in order to collect and share their knowledge concerning the relevant indicators of economic performance and its causes. The collected data have been standardized, harmonized, and stored for future use. New indicators to study inequality have been developed. The datasets are accessible through the Clio Infra portal which also offers possibilities for visualization of the data. All Clio Infra datasets will be archived by Data Archiving and Networked Services (DANS).</p>
<p>The unique global datasets enable new opportunities for data analysis and the testing of hypotheses from new economic theories. Clio Infra offers the opportunity to greatly enhance our understanding of the origins, causes and character of the process of global inequality.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'name' => '',
  'picture' => 0,
  'data' => NULL,
  'date' => '2013-01-11 21:20:56 +0100',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'World Economic History Congress in Kyoto',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'a6d90555-8f68-4086-9c9f-6c5fcaf03b8f',
  'type' => 'article',
  'language' => 'und',
  'created' => 1364226343,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'db1d609e-5645-47d7-b8a2-f2a1ad90241d',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'The XVIIth World Economic History Congress will be held in Kyoto, 3-7 August 2015. 

<embed src="http://www.wehc2015.org" width="1000" height="950"> </embed>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>The XVIIth World Economic History Congress will be held in Kyoto, 3-7 August 2015. </p>
<p><embed src="http://www.wehc2015.org" width="1000" height="950"></embed></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_image' => array(
    'und' => array(
      0 => array(
        'fid' => 279,
        'uid' => 1,
        'filename' => '001.jpg',
        'uri' => 'public://field/image/001.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 307875,
        'status' => 1,
        'timestamp' => 1397053363,
        'uuid' => '00b2f925-5650-4b67-bb52-5d28d902f611',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 900,
        'height' => 289,
      ),
    ),
  ),
  'field_tags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'name' => '',
  'picture' => 0,
  'data' => NULL,
  'date' => '2013-03-25 16:45:43 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Disclaimer',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'a7403378-f752-452f-a8ca-545f425d9ecb',
  'type' => 'page',
  'language' => 'und',
  'created' => 1396885323,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'dd17f78b-6b23-476e-b4b6-27c7eaa7d804',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Clio Infra aims to provide accurate and complete information, but it disclaims warranties with respect to use of the information provided on this website. Clio Infra expressly declines liability for any loss or damages related to the accuracy or completeness of the information provided on this site.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Clio Infra aims to provide accurate and complete information, but it disclaims warranties with respect to use of the information provided on this website. Clio Infra expressly declines liability for any loss or damages related to the accuracy or completeness of the information provided on this site.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-04-07 17:42:03 +0200',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Quality of Life Workshop at the OECD',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'e0f19d88-8e82-463b-8e4f-aef92fabd2d8',
  'type' => 'article',
  'language' => 'und',
  'created' => 1364131524,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e1fab89f-3014-4721-a7d9-da284ec1df75',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'On December 12-13, 2013, a workshop of Clio Infra and the OECD on Quality of Life will be held at the offices of the OECD in Paris. 
An introduction to the topic is provided below.


<embed src="http://www.oecdbetterlifeindex.org/" width="1100" height="755"> </embed>

',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>On December 12-13, 2013, a workshop of Clio Infra and the OECD on Quality of Life will be held at the offices of the OECD in Paris.<br />
An introduction to the topic is provided below.</p>
<p><embed src="http://www.oecdbetterlifeindex.org/" width="1100" height="755"></embed></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_image' => array(
    'und' => array(
      0 => array(
        'fid' => 280,
        'uid' => 1,
        'filename' => 'bli-oecd-logo1.gif',
        'uri' => 'public://field/image/bli-oecd-logo1.gif',
        'filemime' => 'image/gif',
        'filesize' => 8188,
        'status' => 1,
        'timestamp' => 1397053411,
        'uuid' => 'efb67bb2-fa3f-4bed-be0d-58358de0bcce',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 207,
        'height' => 264,
      ),
    ),
  ),
  'field_tags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'name' => '',
  'picture' => 0,
  'data' => NULL,
  'date' => '2013-03-24 14:25:24 +0100',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Population',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '7d903eaf-34fb-4e99-977a-fea2166a9d3f',
  'type' => 'slideshow_item',
  'language' => 'und',
  'created' => 1370442048,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f255c391-e4d2-4792-a6f0-94af680dffdb',
  'revision_uid' => 1,
  'body' => array(),
  'field_arrow_1' => array(
    'und' => array(
      0 => array(
        'value' => 'high',
      ),
    ),
  ),
  'field_arrow_2' => array(
    'und' => array(
      0 => array(
        'value' => 'low',
      ),
    ),
  ),
  'field_bar_1' => array(
    'und' => array(
      0 => array(
        'value' => '#C40E1F',
      ),
    ),
  ),
  'field_bar_2' => array(
    'und' => array(
      0 => array(
        'value' => '#DB6B20',
      ),
    ),
  ),
  'field_height_1' => array(
    'und' => array(
      0 => array(
        'value' => 90,
      ),
    ),
  ),
  'field_height_2' => array(
    'und' => array(
      0 => array(
        'value' => 5,
      ),
    ),
  ),
  'field_slideshow_image' => array(),
  'field_text_1' => array(
    'und' => array(
      0 => array(
        'value' => 'Total world population increased with more than 1300% in the last five-hundred years ...',
        'format' => NULL,
        'safe_value' => 'Total world population increased with more than 1300% in the last five-hundred years ...',
      ),
    ),
  ),
  'field_text_2' => array(
    'und' => array(
      0 => array(
        'value' => 'but almost half of the world’s population live in two countries: India and China',
        'format' => NULL,
        'safe_value' => 'but almost half of the world’s population live in two countries: India and China',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
  ),
  'name' => '',
  'picture' => 0,
  'data' => NULL,
  'date' => '2013-06-05 16:20:48 +0200',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Colophon',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'e1f841fe-dd8a-48ab-bea5-dc3319607b5a',
  'type' => 'page',
  'language' => 'und',
  'created' => 1396885390,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f3ac4b34-5110-433c-a0e8-c99a837578d3',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Texts: Jan Luiten van Zanden, Reinoud Bosch
Design: <a href="http://www.thonik.nl">Thonik</a>
Realization: Vyacheslav Tikhonov, Jerry de Vries, Gaele Strootman, Reinoud Bosch
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Texts: Jan Luiten van Zanden, Reinoud Bosch<br />
Design: <a href="http://www.thonik.nl">Thonik</a><br />
Realization: Vyacheslav Tikhonov, Jerry de Vries, Gaele Strootman, Reinoud Bosch</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-04-07 17:43:10 +0200',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'ESSHC Conference in Vienna',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '79fa1d4e-26af-485e-8efe-f7ee117d7d3c',
  'type' => 'article',
  'language' => 'und',
  'created' => 1364226693,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f5625fba-746c-40ec-b594-3c57df16df47',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'The International Institute for Social History will organize the Tenth European Social Science History conference in Vienna, 23-26 April 2014. 

<embed src="http://esshc.socialhistory.org/esshc-vienna-2014" width="1000" height="550"> </embed>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>The International Institute for Social History will organize the Tenth European Social Science History conference in Vienna, 23-26 April 2014. </p>
<p><embed src="http://esshc.socialhistory.org/esshc-vienna-2014" width="1000" height="550"></embed></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_image' => array(
    'und' => array(
      0 => array(
        'fid' => 278,
        'uid' => 1,
        'filename' => 'esshc-logo-2012_0.png',
        'uri' => 'public://field/image/esshc-logo-2012_0.png',
        'filemime' => 'image/png',
        'filesize' => 16257,
        'status' => 1,
        'timestamp' => 1397053305,
        'uuid' => 'f6237b8e-a3bb-4668-a8f9-76167a072aa5',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 452,
        'height' => 94,
      ),
    ),
  ),
  'field_tags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'name' => '',
  'picture' => 0,
  'data' => NULL,
  'date' => '2013-03-25 16:51:33 +0100',
);
  return $nodes;
}
